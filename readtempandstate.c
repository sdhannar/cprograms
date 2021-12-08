#include<stdio.h>
main()
{
	float temp;
	printf("The temperature is in celsius is: ");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("Freezing weather");
	}
	else if(temp>=0&&temp<10)
	{
		printf("Very cold weather");
	}
	else if(temp>=10&&temp<20)
	{
		printf("Cold weather");
	}
	else if(temp>=20&&temp<30)
	{
		printf("Normal");
	}
	else if(temp>=30&&temp<  40)
	{
		printf("Hot");
	}
	else
	{
		printf("Very hot");
	}
}
