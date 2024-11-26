#include <stdio.h>
int main()
{
	int a, b, xapxep;
	printf ("moi nhap so nguyen a:");
    scanf ("%d",&a);
	while (a > 0) {
           b=a%10;
           a /= 10;
           xapxep=b;
		   if (b<xapxep)
		   {
		   	 xapxep=b; 
			 }  
          
        }
        switch (xapxep)
		{
			case 1:
			printf ("%d la so nguyen to \n",xapxep);
			return 1;
			case 2:
			printf ("%d la so nguyen to \n",xapxep);
			return 1;
			case 3:
			printf ("%d la so nguyen to \n",xapxep);
			return 1;
			case 5:
			printf ("%d la so nguyen to \n",xapxep);
			return 1;
			case 7:
			printf ("%d la so nguyen to \n",xapxep);
			return 1;
			default:
			printf ("%d khong phai so nguyen to \n",xapxep);
		 }  
        return 0; 
 } 
