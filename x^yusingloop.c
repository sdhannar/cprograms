#include<stdio.h>
main()
{
	int i,x,y,p;
	printf("Enter the values of x and y: ");
	scanf("%d\n%d",&x,&y);
	while(i<y)
	{
		p=p*x;
		i++;
	}
	printf("The value of x^y is %d",p);
}
