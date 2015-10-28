#include <stdio.h>
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;


int main()
{//InicioMain
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	
	printf("Ingrese el numero 1:\n");
	scanf("%d",&n1);
	printf("Ingrese el numero 2:\n");
	scanf("%d",&n2);
	printf("Ingrese el numero 3:\n");
	scanf("%d",&n3);
	printf("Ingrese el numero 4:\n");
	scanf("%d",&n4);
	printf("Ingrese el numero 5:\n");
	scanf("%d",&n5);
	printf("Ingrese el numero 6:\n");
	scanf("%d",&n6);
	printf("Ingrese el numero 7:\n");
	scanf("%d",&n7);
	printf("Ingrese el numero 8:\n");
	scanf("%d",&n8);
	printf("Ingrese el numero 9:\n");
	scanf("%d",&n9);
	printf("Ingrese el numero 10:\n");
	scanf("%d",&n10);
	
	
	
	if(n1>n2&&n1>n3&&n1>n4&&n1>n5&&n1>n6&&n1>n7&&n1>n8&&n1>n9&&n1>n10)
	{
		printf("El numero mayor es:%d\n",n1);
	}
	if(n2>n1&&n2>n3&&n2>n4&&n2>n5&&n2>n6&&n2>n7&&n2>n8&&n2>n9&&n2>n10)
	{
		printf("El numero mayor es:%d\n",n2);
	}else if(n3>n2&&n3>n1&&n3>n4&&n3>n5&&n3>n6&&n3>n7&&n3>n8&&n3>n9&&n3>n10)
	{
		printf("El numero mayor es:%d\n",n3);
	}else if(n4>n2&&n4>n3&&n4>n1&&n4>n5&&n4>n6&&n4>n7&&n4>n8&&n4>n9&&n4>n10)
	{
		printf("El numero mayor es:%d\n",n4);
	}else if(n5>n2&&n5>n3&&n5>n4&&n5>n1&&n5>n6&&n5>n7&&n5>n8&&n5>n9&&n5>n10)
	{
		printf("El numero mayor es:%d\n",n5);
	}else if(n6>n2&&n6>n3&&n6>n4&&n6>n5&&n6>n1&&n6>n7&&n6>n8&&n6>n9&&n6>n10)
	{
		printf("El numero mayor es:%d\n",n6);
	}else if(n7>n2&&n7>n3&&n7>n4&&n7>n5&&n7>n6&&n7>n1&&n7>n8&&n7>n9&&n7>n10)
	{
		printf("El numero mayor es:%d\n",n7);
	}else if(n8>n2&&n8>n3&&n8>n4&&n8>n5&&n8>n6&&n8>n7&&n8>n1&&n8>n9&&n8>n10)
	{
		printf("El numero mayor es:%d\n",n8);
	}else if(n9>n2&&n9>n3&&n9>n4&&n9>n5&&n9>n6&&n9>n7&&n9>n8&&n9>n1&&n9>n10)
	{
		printf("El numero mayor es:%d\n",n9);
	}else if(n10>n2&&n10>n3&&n10>n4&&n10>n5&&n10>n6&&n10>n7&&n10>n8&&n10>n1)
	{
		printf("El numero mayor es:%d\n",n10);
	}
	
	if(n1<n2&&n1<n3&&n1<n4&&n1<n5&&n1<n6&&n1<n7&&n1<n8&&n1<n9&&n1<n10)
	{
		printf("el numero mayor es:%d",n1);
	}
	if(n2<n1&&n2<n3&&n2<n4&&n2<n5&&n2<n6&&n2<n7&&n2<n8&&n2<n9&&n2<n10)
	{
		printf("el numero menor es:%d\n",n2);
	}else if(n3<n2&&n3<n1&&n3<n4&&n3<n5&&n3<n6&&n3<n7&&n3<n8&&n3<n9&&n3<n10)
	{
		printf("el numero menor es:%d\n",n3);
	}else if(n4<n2&&n4<n3&&n4<n1&&n4<n5&&n4<n6&&n4<n7&&n4<n8&&n4<n9&&n4<n10)
	{
		printf("el numero menor es:%d\n",n4);
	}else if(n5<n2&&n5<n3&&n5<n4&&n5<n1&&n5<n6&&n5<n7&&n5<n8&&n5<n9&&n5<n10)
	{
		printf("el numero menor es:%d\n",n5);
	}else if(n6<n2&&n6<n3&&n6<n4&&n6<n5&&n6<n1&&n6<n7&&n6<n8&&n6<n9&&n6<n10)
	{
		printf("el numero menor es:%d\n",n6);
	}else if(n7<n2&&n7<n3&&n7<n4&&n7<n5&&n7<n6&&n7<n1&&n7<n8&&n7<n9&&n7<n10)
	{
		printf("el numero menor es:%d\n",n7);
	}else if(n8<n2&&n8<n3&&n8<n4&&n8<n5&&n8<n6&&n8<n7&&n8<n1&&n8<n9&&n8<n10)
	{
		printf("el numero menor es:%d\n",n8);
	}else if(n9<n2&&n9<n3&&n9<n4&&n9<n5&&n9<n6&&n9<n7&&n9<n8&&n9<n1&&n9<n10)
	{
		printf("el numero menor es:%d\n",n9);
	}else if(n10<n2&&n10<n3&&n10<n4&&n10<n5&&n10<n6&&n10<n7&&n10<n8&&n10<n1)
	{
		printf("el numero menor es:%d\n",n10);
	}
	return 0;
}//FinMAin

