#include <stdio.h>
int main ()
{
	int a;
	printf ("moi nhap gia tri a:");
	scanf ("%d",&a);
	for (int i=1; i<=a; i++)
	{
		if (a%i==0)
		{
			printf ("uoc cua %d la :%d\n",a,i); 
		} 
	} 
	return 0; 
} 
