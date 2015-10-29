/*
programa que dice si es reprobado o si no aprobado*/
#include<stdio.h>//libreria de E/s
int calificacion;
int main()
{
	printf("si el resultado es mayo a 7 esta aprobado\n");
	printf("ingrese la calificacion\n");
	scanf("%d",&calificacion);
	if(calificacion>=7)
	
	{
	printf("aprobado\n");
	}
	else
	{
		printf("reprobado\n");
	}
}

