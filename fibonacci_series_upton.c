#include<stdio.h>
main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	while(c<n)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
