#include<stdio.h>
main()
{
	int i,n,s=0;
	printf("Enter a number n: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(n==s)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not perfect number",n);
	}
	
}
