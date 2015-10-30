#include<stdio.h>//Libreria de E/S
/*final*/
int i;
int final;
int suma;
int main ()
{
	printf("Ingrese cualquier numero\n");
	scanf("%d\n",&final);
	while (i<=final)
	{
		printf("%d",i);
		i=i+1;
		suma=suma+i;
	}
}
