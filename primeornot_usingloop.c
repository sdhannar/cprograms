#include<stdio.h>
main()
{
	int v=0,n,i;
	printf("Enter a number n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			v++;
		}
	}
	if(v==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is a composite number",n);
	}
}
