#include<stdio.h>
int main()
{
  int no=0,t=0,sum=0;
  scanf("%d",&no);
  t=no;
  s=(t%10)*(t%10)*(t%10);
  t/=10;
  s+=(t%10)*(t%10)*(t%10);
  t/=10;
  s+=(t%10)*(t%10)*(t%10);
  if(s==no)
  printf("is an armstrong number no\n",no);
  else
  printf("is not an armstrong number no\n",no);
return 0;
}