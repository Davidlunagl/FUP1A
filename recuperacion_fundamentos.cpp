#include<stdio.h>//Libreria de E/S
int meses;
int dias;
int cont;
int main()
{
	int n,cont,dias=0,meses=0;
	for(cont=0; cont<=1; cont++)
	{
		printf("Dame los dias\n");
		scanf("%d",&dias);
		printf("Dame los meses\n");
		scanf("%d",&meses);
		
		if (cont==0)
		{
			meses=dias=n;
		}
		if (n<dias)
		{
			dias=n;
		}
		if	(n>meses)
		{
			meses=n;
		}
		printf("Los dias que han pasado son\n");
	}	
}
