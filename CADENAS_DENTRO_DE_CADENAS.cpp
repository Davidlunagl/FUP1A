#include<stdio.h>//Libreria de E/S
/*Programa para encontrar una cadena dentro de otra cadena*/
char cadena[50];
char subcadena[50];
int final;
int i,j;
int main ()
{
	scanf("%d",cadena);
	scanf("%d",subcadena);
	j=0;
	i=0;
	{
		while (cadena[i]==subcadena[j])
		{
			i++;
			j++;
			if ( subcadena[j]=='\0')
			{
				printf("Si Existe\n");
				break;
			}
		}
	i++;
	j=0;
	}
	if(cadena[i]=final)
	{
		final=cadena[i];
		final<=final;
		printf("No Existe\n");
	}
}
