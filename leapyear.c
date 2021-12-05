#include<stdio.h>
main()
{
	int x;
	printf("Year is: ");
	scanf("%d",&x);
	if(x%400==0||x%4==0&&x%100!=0)
	{
		printf("Its a leap year");		
	}
	else
	{
		printf("Its not a leap year");
	}
}
