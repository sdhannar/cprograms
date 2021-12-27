#include<stdio.h>
main()
{
	int i=1,f=1,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("The fatorial of is:%d",f);
	
}
