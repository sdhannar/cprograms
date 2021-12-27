#include<stdio.h>
main()
{
	int n,p=1,x;
	printf("Enter a number n: ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		p=p*x;
		n=n/10;
	}
	printf("The product of the digits of the given number is:%d",p);
}
