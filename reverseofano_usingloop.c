#include<stdio.h>
main()
{
	int n,s=0,remainder;
    printf("Enter a number n: ");
    scanf("%d",&n);
    while (n>0)
    {
	    remainder = n%10;
        s=s*10+remainder;
        n=n/10;
    }
    printf("Reversed number: %d",s);
}
