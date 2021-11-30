#include<stdio.h>
main()
{
	int a,b,r,c;
	scanf("%d%d",&a,&b);
	c=a/b;
	r=(a-c*b);
	printf("The reminder and quotient is %d,%d",r,c);
}
