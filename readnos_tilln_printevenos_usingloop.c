#include<stdio.h>
main()
{
	int n,i=2;
	printf("Enter a number n:");
	scanf("%d",&n);
	printf("Even numbers upto %d:\n",n);
	while(i<=n)
	{
		printf("%d\n",i);
		i=i+2;
	}
}
			
	
