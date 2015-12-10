#include<stdio.h>//Libreria de E/S
/*Funciones*/
int resta(int n1,int n2)
{
	int res;
	res=n1-n2;
	return res;
}
int main ()
{
	int res;
	res=resta(9,4);
	printf("%d",res);
}
