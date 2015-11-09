#include<stdio.h>//Libreria de E/S
int n1;
int n2;
int metros;
int dias;
int main ()

{
	printf("EL Cangrejo se callo al hoyo\n");
	printf("Ingrese los metros que avanzo el cangrejo\n");
	scanf("%d",&n1);
	printf("Ingrese los metros que retrocedió el cangrejo\n");
	scanf("%d",&n2);
	
	dias=1;
	while (metros<=dias)
	{
		metros=dias;
		if (metros%5==3)
		{
			while (metros<=dias)
			{
				printf("%d\n",dias);
				dias=dias+metros;
			}
		if (dias<=metros)
			{
			
			while (metros>=dias)
			{
				printf("%d\n",metros);
				metros=metros-3;	
			}
			}
		}
		else 
		{
			printf("%d\n",metros);
			
		}
			metros=metros+dias;
			printf("\n");
	}
}
