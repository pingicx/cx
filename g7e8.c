/*Grupo 2 Ejercicio 8 guia 7
Recibir por teclado (o un  archivo) una lista de programas con sus opciones y parámetros correspondientes.
Si se ingresa por teclado, el programa se debe terminar presionando Ctrl+D (o Ctrl+C).
Separar todas las palabras en 3 grupos: Programa, opción (con su valor correspondiente) o parámetro.
Se supone que el programa se ejecuta en Linux.
El nombre del programa no puede contener espacios (a menos que se escape).
Si la línea del nombre del programa contiene un '/' se interpreta lo previo al mismo como un directorio.
Las opciones, los valores y los parámetros no pueden contener espacios (a menos que se escape);
además, deben estar separados entre si y del nombre del programa por espacios o tabulaciones.
El programa supone que todas las claves vienen acompañadas de un valor, porque no hay forma de verificar lo contrario,
aunque si el último elemento de una linea es la clave de una opcion, supone que esa opcion no necesita valor.
Las palabras pueden tener un largo máximo de MAXCHARS*/

#include <stdio.h>

#define MAXCHARS 50
#define OPTION 1
#define PARAMETER 2
#define NO_TYPE 0
#define TERMINATOR 0

char printAndEvalWords (void);

//Arreglo para guadar una palabra temporalmente.
char word [MAXCHARS+1];

int main (void)
{
	char input=0,i;
	for (i=0;input!=EOF;i=0)											//hacer un loop (analizando una linea por ciclo del loop) hasta que se encuentre el final del archivo.
	{
		for (input=getchar ();((((input!=' ')&&(input!='\n'))&&(input!=EOF))&&(input!='\t'));input=getchar ())	//Poner el nombre del programa en el arreglo.
		{
			if (input=='/')											//Si hay una barra reiniciar i.
				(i=0);
			else if (input=='\\')										//la barra invertida escapa el siguiente caracter.
				(word[i]=(input=getchar ()))&&++i;
			else
				(word[i]=input)&&++i;
		}
		word [i]=TERMINATOR;
		((input!=EOF)&&(i!=0))&&(printf ("Nombre del Programa: \"%s\"\n",word));
		for (;((input!='\n')&&(input!=EOF));input=printAndEvalWords ());					//imprimir los parámetros y opciones.
	}
}

//Recibir una palabra, evaluar si es parámetro, opcion o valor y mostrarla en pantalla.
char printAndEvalWords (void)
{
	char input,count,type=NO_TYPE,i=0;
	for (input=getchar ();(input==' ')||(input=='\t');input=getchar ());							//Omitir los espacios y tabulaciones iniciales.
	for (count=0;((((input!=' ')&&(input!='\n'))&&(input!=EOF))&&(input!='\t'));count++,input=getchar ())			//Obtener la palabra y evaluar si es opción o parámetro.	
	{
		if ((input=='-')&&(type==NO_TYPE))
			(printf ("Opción: "))&&(type=OPTION);
		else if (type==NO_TYPE)
			(printf ("Parámetro: "))&&(type=PARAMETER);
		if ((type!=OPTION)||(count!=0))
			(input=='\\') ? (word[i]=(input=getchar ()))&&++i: (word[i]=input)&&++i;
	}
	if (type==OPTION)													//Obtener el valor si la palabra anterios era la clave de una opción y colocarlo en pantalla.
	{
		(word [i]=' ')&&i++;
		for (;(input==' ')||(input=='\t');input=getchar ());
		for (;((((input!=' ')&&(input!='\n'))&&(input!=EOF))&&(input!='\t'));word[i]=input,i++,input=getchar ());
	}
	(count)&&((word[i]=TERMINATOR)||(printf ("\"%s\"\n",word)));
	return input;														//devolver el caracter proximo al final del elemento evaluado.
}
