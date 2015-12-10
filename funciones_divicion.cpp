#include<stdio.h>
/*divicion*/
int divicion(int n1, int n2)
{
	int res;
	res=n1/n2;
	return res;
}
int main()
{
	int res;
	res=divicion(8,2);
	printf("%d",res);
}
