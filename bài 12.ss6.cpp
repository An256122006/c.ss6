#include <stdio.h>
int main()
{
	int a=0, b=1, c, d;
	printf ("moi ban nhap so nguyen bat ky:");
	scanf ("%d",&d);
	for (int i=1; i<=d; i++)
	{
		c= a + b;
		a=b;
		b=c; 
	 } 
	 printf ("so dau tien là: %d",c-(c-1));
	 return 0; 
 } 
