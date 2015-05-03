#include<stdio.h> 
#include<stdlib.h> 
/*____________________________________________________________________________*/ 

/* Esta funcion calculara la diferencia entre los anios ingresados, tomara en 
cuenta los dias bisiestos añadiendolos al calculo de su diferencia de dichos 
anios convertidos en dias: diferencia de anios + dias bisiestos */ 

int difanios(int a1, int a2){ 
int aniodif, cta, i, aniodias; 
aniodif = a2-a1; /* Para sacar la diferencia de anios */ 
/*Para contar los anios bisiestos en un intervalo de fechas: */ 
cta=0; /* Levara la cuenta de anios bisiestos */ 
/*Recorrera del a1 al a2 comprobando si existen anios bisiestos: 
los anios bisiestos son divisibles por 4 y 400, excluyendo los que sean 
divisibles por 10 */ 
for (i=a1; i<=a2; i++) 
{ 
if ((i%4 == 0) && (i%100!=0 || i%400==0)) 
{ 
cta = cta+1; 
} 
} 
/* La difrerencia de anios multiplicada por 365 mas la cuenta de numero de 
anios bisiestos nos dara el numero de dias que har entre los anios evaluados */ 
aniodias=(aniodif*365)+cta; 
return aniodias; 
} 
/*____________________________________________________________________________*/ 
/* Al primer anio se le quitaran los dias del intervalo del primer dia del anio 
a la primer fecha ingresada */ 
int diasaniouno (int d1, int me1, int a1){ 
int m1, restodias1; 
/* Cada numero de mes tiene asignado numeros pre calculados ya que no todos 
los meses tienen el mismo numero de dias. 
Se empieza en el dia 1 y aumenta de acuerdo al numero de dias que tiene cada 
mes hasta completar el anio */ 
switch (me1){ 
case 1: m1=0; 
break; 
case 2: m1=31; 
break; 
case 3: m1=59; 
break; 
case 4: m1=90; 
break; 
case 5: m1=120; 
break; 
case 6: m1=151; 
break; 
case 7: m1=181; 
break; 
case 8: m1=212; 
break; 
case 9: m1=243; 
break; 
case 10: m1=273; 
break; 
case 11: m1=304; 
break; 
case 12: m1=334; 
break; 
} 

/* Dependiendo del mes asignado sus dias se sumaran con los dias ingresados 
de la primera fecha */ 
restodias1= m1 + d1; 
/* Devuelve el valor que se pretendia calcular */ 
return restodias1; 
} 
/*____________________________________________________________________________*/ 
/* Al segundo anio se le quitaran los dias del intervalo de la segunda fecha 
ingresada hasta el ultimo dia de ese mismo anio */ 
int diasaniodos (int d2, int me2, int a2){ 
int m2, restodias2; 
/* Cada numero de mes tiene asignado numeros precalculados ya que no todos 
los meses tienen el mismo numero de dias. 
Se empieza en el dia 1 y aumenta de acuerdo al numero de dias que tiene cada 
mes hasta completar el anio */ 
switch (me2){ 
case 1: m2=0; 
break; 
case 2: m2=31; 
break; 
case 3: m2=59; 
break; 
case 4: m2=90; 
break; 
case 5: m2=120; 
break; 
case 6: m2=151; 
break; 
case 7: m2=181; 
break; 
case 8: m2=212; 
break; 
case 9: m2=243; 
break; 
case 10: m2=273; 
break; 
case 11: m2=304; 
break; 
case 12: m2=334; 
break; 
} 

restodias2= m2 + d2; 
/* Devuelve el valor que se pretendia calcular */ 
return restodias2; 
} 
/*____________________________________________________________________________*/ 
void main (void)
{ 
/* Se pedira en esta funcion los datos solicitados por el programa */ 
int dia1, dia2, mes1, mes2, anio1, anio2, restodias1, restodias2, aniodias, diastotales; 
/* Anuncia lo que pedira para la primera fecha*/ 
printf ("Ingresara datos de la primera fecha:\n"); 
printf("Ingrese el dia\n"); /* Solicita que ingress el primer dia */ 
scanf ("%d",&dia1); 
printf ("Ingrese el mes\n"); /* Solicita que ingrese el primer mes */ 
scanf ("%d",&mes1); 
printf ("Ingrese el anio\n"); /* Solicita que ingrese el primer anio */ 
scanf("%d",&anio1); 
/* Anuncia lo que pedira para la primera fecha*/ 
printf ("Ingresara datos de la segunda fecha:\n"); 
printf("Ingrese el dia\n"); /* Solicita que ingrese el segundo dia */ 
scanf ("%d",&dia2); 
printf ("Ingrese el mes\n"); /* Solicita que ingrese el segundo mes */ 
scanf ("%d",&mes2); 
printf ("Ingrese el anio\n"); /* Solicita que ingrese el segundo anio */ 
scanf ("%d",&anio2); 

/*Llamada a la funcion difanios*/ 
aniodias=difanios (anio1, anio2); 
/* Lammada a la funcion diasaniouno*/ 
restodias1=diasaniouno (dia1, mes1, anio1); 
/* Llamada a la funcion diasaniodos*/ 
restodias2=diasaniodos (dia2, mes2, anio2); 
/* Calcula 'diastotales' con los valores que devuelve cada funcion */ 
diastotales= aniodias + (restodias2 - restodias1); 
/*printf ("n n");*/ 
printf ("la diferencia es de %d dias en total\n", diastotales); 
return 0;
/*system ("pause");  Comando para pausar el programa antes de cerrar */ 
} 