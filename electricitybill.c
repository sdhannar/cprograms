#include<stdio.h>
main()
{
	int units;
	float totalcharge,charge,surcharge;
	printf("Enter total units consumed: ");
	scanf("%d",&units);
	if(units<=50)
	{
		charge=(units*0.50);
	}
	else if(units>50&&units<=150)
	{
		charge=25+((units-50)*0.75);
	}
	else if(units>150&&units<=250)
	{
		charge=100+((units-150)*1.20);
	}
	else
	{
		charge=220+((units-250)*1.50);
	}
	surcharge= charge*0.2;
	totalcharge= charge+surcharge;	
	printf("Electricity bill is:%f",totalcharge);
}
