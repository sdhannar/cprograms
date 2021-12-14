#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d,r1,r2;
	printf("Enter the values of a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	switch(d>0)
	{
		case 1:printf("Roots are real and different");break;
		case 0:switch(d<0)
		{
			case 1:printf("Roots are imaginary");break;
			case 0:printf("Roots are real and equal");break;
		}
	}
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("\nThe roots of the quadratic equation are:%d,%d",r1,r2);
}
