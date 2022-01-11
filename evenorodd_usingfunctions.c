#include<stdio.h>
void even(int a)
{
	if(a%2==0)
	printf("\n%d is an even number",a);
	else
	printf("\n%d is an odd number",a);
}
int main(void)
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	even(a);
	return 0;
}


