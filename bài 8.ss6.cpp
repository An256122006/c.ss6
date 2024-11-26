#include <stdio.h>
int main()
{
	int a, b;
	float c=0.01, tong, tienlai; 
	printf ("moi ban nhap so tien ban dau:");
	scanf ("%d",&a);
	printf ("moi ban nhap so thang gui:");
	scanf ("%d",&b);
	for (int i=1; i<=b; i++)
	{
		tong = a; 
		tienlai = tong*c;
		a = tong + tienlai; 
	}
	 tong = a + tienlai; 
	 printf ("so tien lai nhan dc sau %d thang là:%.2f\n",b,tienlai);
	 printf ("tong so tien nhan dc: %.2f\n", tong); 
	 return 0; 
 } 
