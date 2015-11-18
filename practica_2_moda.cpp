#include<stdio.h>//Libreria de E/S
int moda [10],arreglo[10];
int i,mayor,posmayor;
int main ()
{//iniciomain
	mayor=0;
	moda[i]=0;
	for (i=0;i<=10;i++)
{
	printf("Dame una calificacion\n");
	scanf("%d\n",&arreglo[i]);	
	moda[i]=0;
	moda[arreglo[i]-1]++;
	
	if (moda[i]>mayor)
	{
		mayor=moda[i];
		posmayor=i;
	}
	printf("La Moda es %d\n",posmayor+1);	
}
}//finmain
