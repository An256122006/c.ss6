#include <stdio.h>
int main()
{
	int a;
	printf ("moi nhap so nguyen a:");
    scanf ("%d",&a);
	if (a>0 && a<10)
	{
		switch (a)
		{
			case 1:
			printf ("%d la so nguyen to \n",a);
			break;
			case 2:
			printf ("%d la so nguyen to \n",a);
			break;
			case 3:
			printf ("%d la so nguyen to \n",a);
			break;
			case 5:
			printf ("%d la so nguyen to \n",a);
			break;
			case 7:
			printf ("%d la so nguyen to \n",a);
			break; 
		 }  
    }else if (a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)
	{
			printf ("%d la so nguyen to \n",a);
	 } else 
	 {
	 	printf ("khong phai la so nguyen to"); 
	  } 
	  return 0; 
 } 
