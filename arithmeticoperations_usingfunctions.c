#include<stdio.h>
void sum(int a,int b)
{
	int sum=a+b;
	printf("Sum is %d",sum);
}
void diff(int a,int b)
{
	int diff=a-b;
	printf("\nDifference is %d",diff);
}
void pro(int a,int b)
{
	int pro=a*b;
	printf("\nProduct is %d",pro);
}
void div(int a,int b)
{
	float div=a/b;
	printf("\nThe quotient of a/b is %d",div);
	
}
int main(void)
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	diff(a,b);
	pro(a,b);
	div(a,b);
	return 0;
}
