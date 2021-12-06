#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,r1,r2;
	printf("Enter the values of a,b,c ");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(a==0)
	{
		printf("Invalid");
	}
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("Roots are real and different r1=%f r2=%f",r1,r2);
	}
	else if (d==0)
	{
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("Roots are equal r1=%f r2=%f",r1,r2);
	}
	else
	{
		printf("Roots are imaginary");
	}
}
