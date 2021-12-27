#include<stdio.h>
main()
{
	int n,v=0;
	printf("Enter a number n: ");
	scanf("%d",&n);
	while (n>0)
	{
		n=n/10;
		v++;
	}
	printf("The number of digits in n:%d",v);
}
