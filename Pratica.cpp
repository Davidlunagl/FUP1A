#include<stdio.h>// Libreria de E/S
int valor1;
int valor2;
int main()
{
	printf("Ingresa un numero\n");
	scanf("%d",&valor1);
	printf("Ingrese otro numero\n");
	scanf("%d",&valor2);
	if (valor1<=valor2)	
	{
		while ( valor1 <= valor2)
		{
			printf("%d",& valor1);
			valor1=valor1+1;
		}
	}
	else if (valor2>=valor1)
	{
		while (valor2>=valor1)
		{
			printf("%d",&valor2);
			valor2= valor2+1;
		}
	}
}
