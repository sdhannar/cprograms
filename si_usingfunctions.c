#include <stdio.h>
void si(int P,int T,int R)
{
  int si=P*T*R/100;
  printf("%d",si);
}
int main(void)
{
  int x,y,z;
  printf("Enter values of P,T,R");
  scanf("%d%d%d",&x,&y,&z);
  si(x,y,z);
  return 0;
}
