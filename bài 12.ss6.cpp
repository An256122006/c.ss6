#include <stdio.h>
int main()
{
	int a=0, b=1, c, d;
	printf ("moi ban nhap so nguyen bat ky:");
	scanf ("%d",&d);
	for (int i=1; i<=d; i++)
	{
		c= a + b;
		printf ("%d\n",c); 
		a=b;
		b=c; 
	 } 
	 return 0; 
 } 
