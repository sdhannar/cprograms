#include<stdio.h>
main()
{
	float basic,gsal,hra,ta;
	printf("Basic salary is: ");
	scanf("%f",&basic);
	if(basic<=10000)
	{
		hra=basic*0.2;
		ta=basic*0.8;
	}
	else if(basic<=20000)
	{
		hra=basic*0.25;
		ta=basic*0.9;
	}
	else
	{
		hra=basic*0.3;
		ta=basic*0.95;
	}
	gsal=basic+hra+ta;
	printf("The gross salary is:%f",gsal);
}
