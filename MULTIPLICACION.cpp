#include <stdio.h>
int main ()
{
	int i,a,num1,num2;
	i=1;
	a=0;
	printf ("este programa sirve para dar el resultado de una multiplicacion\n");
	printf ("dame un numero\n");
	scanf ("%d",& num1);
	printf ("dame otro numero\n");
	scanf ("%d",& num2);
	while (i<= num1)
	{
		a=a+num2;
		i=i+1;
	}
	printf("el resultado es :%d\n",a);
}
