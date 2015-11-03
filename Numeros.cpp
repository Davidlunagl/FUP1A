#include<stdio.h>//Libreria de E/S
int a;
int b;
int i;
int main ()

{
	printf("Ingrese un numero\n");
	scanf("%d",&a);
	if (a=b)
	{
	i=a;
	while (a>=b)
	{
		printf("%d\n",&a);
		i=a+1;
	}	
	}
	else 
	{
		i=b;
		while (b<=a)
		{
			printf("%d\n",&b);
			i=b+1;
		}
	}
}
