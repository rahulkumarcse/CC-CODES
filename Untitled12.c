#include<stdio.h>
int main()
{
  int num,temp,fact,sum=0,i,r;
scanf("%d",&num);
temp=num;
while(num>0)
{
fact=1;
r=num%10;
for(i=1;i<=r;i++)
  {
  fact=fact*i; }
  sum=sum+fact;
  num=num/10;
  }
  if(sum==temp)
  printf("it is");
  else
  printf("it is not");
}
