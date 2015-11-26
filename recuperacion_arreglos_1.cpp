#include<stdio.h>
#include<stdlib.h>

int a[10];
int b[10];
int c[10];
int i,j,k;

int main()
{
	printf("Ingrese los numeros del primer arreglo\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Ingrese los numeros del segundo arreglo\n");
	
	for(j=0;j<10;j++)
	{
		scanf("%d",&b[j]);	
	}
	printf("La multiplicacion de su arreglo con el segundoo es\n");
		
		//for(k=0;k<10;k++)
		//	{
				for(j=0;j<10;j++)
				{
					c[j]=a[0]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[1]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[2]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[3]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[4]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[5]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[6]*b[j];
					printf("%d\n",c[j]);
				}		
				for(j=0;j<10;j++)
				{
					c[j]=a[7]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[8]*b[j];
					printf("%d\n",c[j]);
				}
				for(j=0;j<10;j++)
				{
					c[j]=a[9]*b[j];
					printf("%d\n",c[j]);
				}
		//	}
	system("pause");
}

