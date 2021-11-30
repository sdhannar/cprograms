#include<stdio.h>
main()
{
	float CP,SP,profit,loss;
	scanf("%f%f",&CP,&SP);
	if(SP>CP)
	{
		profit=SP-CP;
		printf("profit is %f",profit);
	}
	else
	{
		loss=CP-SP;
		printf("loss is %f",loss);
	}
}
