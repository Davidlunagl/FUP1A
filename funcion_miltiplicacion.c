#include<stdio.h>
/*multiplicacion*/
int miltiplicacion(int n1,int n2)
{
	int res;
	res=n1*n2;
	return res;
}
int main ()
{
	int res;
	res=miltiplicacion(4,5);
	printf("%d",res);
}
