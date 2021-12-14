#include<stdio.h>
main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("The given month has 31 days");break;
		case 4:
		case 6:
		case 9:
		case 11:printf("The given month has 30 days");break;
		case 2:printf("The given month has 28 days");break;
		default:printf("Enter a valid number");			
	}
}
