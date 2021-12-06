#include<stdio.h>
main()
{
	float p,q,r,s,t,per;
	printf("Marks in five subjects are: ");
	scanf("%f\n%f\n%f\n%f\n%f",&p,&q,&r,&s,&t);
	per=((p+q+r+s+t)/500)*(100);
	if(per>90)
	{
		printf("A");
	}
	else if(per>80)
	{
		printf("B");
	}
	else if(per>70)
	{
		printf("C");
	}
	else if(per>40)
	{
		printf("D");
	}
	else if(per<40)
	{
		printf("E");
	}
	
}
