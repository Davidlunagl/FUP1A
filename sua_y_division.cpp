#include<stdio.h>//Libreria de E/S
int n1;
int n2;
int resultado;
float division;
int main ()
{//Inicio main
	printf("programa que suma y divide numeros\n");
	printf("inserte un numnero\n");
	scanf("%d",&n1);
	printf("inserte otro numero\n");
	scanf("%d",&n2);
	resultado=n1+n2;
	division=(float)n1/n2;
	printf("el resultado de la suma es;%d\n",resultado);	
	printf("el resultado de la division es;%f\n",division);
}//Fin main
