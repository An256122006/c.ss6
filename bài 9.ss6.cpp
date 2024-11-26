#include <stdio.h>
int main()
{
	int a, sum, temd, b;
 
	for (a=100; a<=999; a++)
	{
	   sum=0;
	   temd = a;
	   while (temd>0)
	   {
	   	 b=temd%10;
		 sum = sum + (b*b*b);
		 temd=temd/10;	 
		}	
		if (sum==a)
		{
			printf ("%d\n",a); 
		 } 
    }
    return 0; 
 } 
