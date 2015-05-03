//html(); funtion is HTML version of printf
//prototype : int html(const char *format_str,...); 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	html("<html>\n");
	html("<head>\n");
	html("<meta name='viewport' "
		"content='width=320;"
		"maximum-scale=2.0;"
		"minimum-scale=0.2;"
		"initial-scale=1.0'/>");
	html("</head>\n");
	html("<body bgcolor=#%06lx>\n",
		(rand()%255)|(rand()%255)<<8|(rand()%255)<<16);
	html("<font size=7 color=#%06lx>Hello</font> ",
		(rand()%255)|(rand()%255)<<8|(rand()%255)<<16);
	html("<font size=7 color=#%06lx>World!!</font>\n",
		(rand()%255)|(rand()%255)<<8|(rand()%255)<<16);
	html("</body>\n");
	html("</html>\n");

	return 0;
}