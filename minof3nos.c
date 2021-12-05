#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter three numbers- ");
   scanf("%d%d%d",&a,&b,&c);
   if((a<b)&&(a<c))
   {
    printf("Minimum is %d",a);
   }
   else if(b<c)
   {
    printf("Minimum is %d",b);
   }
   else
   {
    printf("Minimum is %d",c);
   }
}
