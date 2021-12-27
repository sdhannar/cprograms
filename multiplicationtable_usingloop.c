#include<stdio.h>
main()
{
	int n,i=1,p;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while(i<=10)
	{
		p=n*i;
		printf("%d\n",p);
		i++;	
	}
	
}
