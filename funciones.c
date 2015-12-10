#include<stdio.h>//Libreria de E/S
/*programa para funciones*/
int suma(int n1, int n2)
{
	int res;
	res=n1+n2;
	return res;
}
int main()
{
	int res;
	res=suma(2,3);
	printf("%d",res);
}
