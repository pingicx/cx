//Original source code found at : book, iPhone 3D Programming 2010 by O'Reilly Media, Inc.

#if !defined(IOS) && !defined(ANDROID)
#error "Not supported platform!"
#else

#include <gles2.h>
#include <gles2ext.h>

#ifdef IOS
GLuint renderbuffer,framebuffer;
#endif

GLuint simpleProgram;

struct Vertex
{
	float Position[2];
	float Color[4];
};

const Vertex Vertices[6]=
{
	{{-0.5,-0.866},{1,1,0.5f,1}},
	{{0.5,-0.866},{1,1,0.5f,1}},
	{{0,1},{1,1,0.5f,1}},
	{{-0.5,-0.866},{0.5f,0.5f,0.5f,1}},
	{{0.5,-0.866},{0.5f,0.5f,0.5f,1}},
	{{0,-0.4f},{0.5f,0.5f,0.5f,1}},
};

const char *SimpleVertexShader=
"attribute vec4 Position;"
"attribute vec4 SourceColor;"
"varying vec4 DestinationColor;"
"uniform mat4 Projection;"
"uniform mat4 Modelview;"
"void main(void)"
"{"
" DestinationColor=SourceColor;"
" gl_Position=Projection*Modelview*Position;"
"}";

const char *SimpleFragmentShader=
"varying lowp vec4 DestinationColor;"
"void main(void)"
"{"
" gl_FragColor=DestinationColor;"
"}";

void ApplyOrtho(float maxX,float maxY) const
{
	float a=1.0f/maxX;
	float b=1.0f/maxY;
	float ortho[16]=
	{
		a,0,0,0,
		0,b,0,0,
		0,0,-1,0,
		0,0,0,1
	};

	GLint projectionUniform=glGetUniformLocation(simpleProgram,"Projection");
	glUniformMatrix4fv(projectionUniform,1,0,&ortho[0]);
}

GLuint BuildShader(const char *source,GLenum shaderType) const
{
	GLuint shaderHandle=glCreateShader(shaderType);
	glShaderSource(shaderHandle,1,&source,0);
	glCompileShader(shaderHandle);
	GLint compileSuccess;
	glGetShaderiv(shaderHandle,GL_COMPILE_STATUS,&compileSuccess);

	if(compileSuccess==GL_FALSE)
	{
		GLchar messages[256];
		glGetShaderInfoLog(shaderHandle,sizeof(messages),0,&messages[0]);
		printf("compile glsl error : %s\n",messages);
	}

	return shaderHandle;
}

GLuint BuildProgram(const char *vShader,const char *fShader) const
{
	GLuint vertexShader=BuildShader(vShader,GL_VERTEX_SHADER);
	GLuint fragmentShader=BuildShader(fShader,GL_FRAGMENT_SHADER);

	GLuint programHandle=glCreateProgram();
	glAttachShader(programHandle,vertexShader);
	glAttachShader(programHandle,fragmentShader);
	glLinkProgram(programHandle);

	GLint linkSuccess;
	glGetProgramiv(programHandle,GL_LINK_STATUS,&linkSuccess);
	if(linkSuccess==GL_FALSE)
	{
		GLchar messages[256];
		glGetProgramInfoLog(programHandle,sizeof(messages),0,&messages[0]);
		printf("compile glsl error : %s\n",messages);
	}

	return programHandle;
}

//OpenGLES2 handlers : init , final , update , render , touch-input
void on_GLES2_Init(int view_w,int view_h)
{
#ifdef IOS
	glGenRenderbuffers(1,&renderbuffer);
	glBindRenderbuffer(GL_RENDERBUFFER,renderbuffer);
	glGenFramebuffers(1,&framebuffer);
	glBindFramebuffer(GL_FRAMEBUFFER,framebuffer);
	glFramebufferRenderbuffer(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,
		GL_RENDERBUFFER,renderbuffer);
#endif

	simpleProgram=BuildProgram(SimpleVertexShader,SimpleFragmentShader);
	glUseProgram(simpleProgram);
}

void on_GLES2_Final()
{
	if(simpleProgram)
		glDeleteProgram(simpleProgram);
	simpleProgram=0;
}

void on_GLES2_Size(int view_w,int view_h)
{
	glViewport(0,0,view_w,view_h);
	ApplyOrtho(2,3);
}

void on_GLES2_Update(float timeStep_sec)
{
}

void on_GLES2_Render()
{
	glClearColor(0.5f,0.5f,0.5f,1);
	glClear(GL_COLOR_BUFFER_BIT);

	float modelViewMatrix[16]=
	{
		1,0,0,0,
		0,1,0,0,
		0,0,1,0,
		0,0,0,1
	};
	GLint modelviewUniform=glGetUniformLocation(simpleProgram,"Modelview");
	glUniformMatrix4fv(modelviewUniform,1,0,&modelViewMatrix[0]);

	GLuint positionSlot=glGetAttribLocation(simpleProgram,"Position");
	GLuint colorSlot=glGetAttribLocation(simpleProgram,"SourceColor");

	glEnableVertexAttribArray(positionSlot);
	glEnableVertexAttribArray(colorSlot);

	GLsizei stride=sizeof(Vertex);
	const GLvoid *pCoords=&Vertices[0].Position[0];
	const GLvoid *pColors=&Vertices[0].Color[0];

	glVertexAttribPointer(positionSlot,2,GL_FLOAT,GL_FALSE,stride,pCoords);
	glVertexAttribPointer(colorSlot,4,GL_FLOAT,GL_FLOAT,stride,pColors);

	GLsizei vertexCount=sizeof(Vertices)/sizeof(Vertex);
	glDrawArrays(GL_TRIANGLES,0,vertexCount);

	glDisableVertexAttribArray(positionSlot);
	glDisableVertexAttribArray(colorSlot);
}

void on_GLES2_TouchBegin(float x,float y)
{
	printf("on_GLES2_TouchBegin(x=%f,y=%f);\n",x,y);
}

void on_GLES2_TouchEnd(float x,float y)
{
	printf("on_GLES2_TouchEnd(x=%f,y=%f);\n",x,y);
}

void on_GLES2_TouchMove(float prev_x,float prev_y,float x,float y)
{
	printf("on_GLES2_TouchMove(prev_x=%f,prev_y=%f,x=%f,y=%f);\n",
		prev_x,prev_y,x,y);
}

#ifdef IOS
void on_GLES2_DeviceRotate(int orientation)
{
	printf("on_GLES2_DeviceRotate(orientation=%d);\n",orientation);
}
#endif

#endif