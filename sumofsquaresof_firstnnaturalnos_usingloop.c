#include<stdio.h>
main()
{
	int i=1,s=0,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+(i*i);
		i++;
	}
	printf("Sum of squares of first n natural numbers is:%d",s);
	
}
