#include<stdio.h>
main()
{
	int a,b,c;
	printf("The three numbers are: ");
	scanf("%d%d%d",&a,&b,&c);
	switch(a<b&&a<c)
	{
		case 1:printf("%d is minimum,a");break;
		case 0:switch(b<a&&b<c)
		{
			case 1:printf("%d is minimum,b");break;
			case 0:printf("%d is minimum,c");break;
		}
	}
	
}
