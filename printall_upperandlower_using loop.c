#include<stdio.h>
main()
{
	char a;
	a='A';
	printf("Upper case alphabets:\n");
	while(a<='Z')
	{
		printf("%c",a);
		a++;
	}
	printf("\n");
	a='a';
	printf("Lower case alphabets:\n");
	while(a<='z')
	{
		printf("%c",a);
		a++;
	}
}
