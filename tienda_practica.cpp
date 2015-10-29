#include<stdio.h>//Libreria de E/S
/*Programa de una tienda*/
int opcion;
int main()
{
	printf("Elija una opcion\n");
	scanf("%d",&opcion);
	switch (opcion)
	{
		case 1:
			printf("Opcion 1: Ventas\n");
			break;
		case 2:
			printf("Elija un producto\n");
			break;
		}
		{
		int i;
			printf("Que vas comprar \n 1-Papas\n 2-Jugo\n 3-Dulces\n 4-Pan\n 5-Licor Elige:\n ");
			scanf("%d",&i);
			if(i==1)
			{
				printf("Compraste Papas\n");
			}else
			if(i==2)
			{
				printf("Compraste Jugo\n");
			}else
			if(i==3)
			{
				printf("Compraste Dulce\n");
			}else
			if(i==4)
			{
				printf("Compraste Pan\n");
			}else
			if (i==5)
			{
				printf("Compraste Licor\n");
			}else
	
		{
			printf("Gracias por tu compra regresa pronto\n");
		}
	}
}

	

