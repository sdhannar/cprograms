#include<stdio.h>
main()
{
	float p,q,r,s,t,per,x;
	printf("Marks in five subjects are: ");
	scanf("%f\n%f\n%f\n%f\n%f",&p,&q,&r,&s,&t);
	x=p+q+r+s+t;
	per=(x*100)/500;
	printf("Percentage is %f and grade is ",per);
	if(per>=90)
	{
		printf("A");
	}
	else if((per>=80)&&(per<90))
	{
		printf("B");
	}
	else if((per>=70)&&(per<80))
	{
		printf("C");
	}
	else if((per>=40)&&(per<70))
	{
		printf("D");
	}
	else if(per<40)
	{
		printf("E");
	}
	
}
