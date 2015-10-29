#include <stdio.h>
float bits;
float Byte;
float KiloByte;
float MegaByte;
float GigaByte;
float TeraByte;
int main()
{
	printf ("ingresa los megabytes\n");
	scanf ("%f",&MegaByte);
	KiloByte=MegaByte*1024;
	Byte=KiloByte*1024;
	bits=Byte*8;
	GigaByte=MegaByte/1024;
	TeraByte=GigaByte/1024;
	printf ("Los bites son %f\n",bits);
	printf ("Los bytes son %f\n",Byte);
	printf ("Los kilobytes son %f\n",KiloByte);
	printf ("Los gigabytes son %f\n",GigaByte);
	printf ("Los terabytes son %f\n",TeraByte);
return 0;
}
