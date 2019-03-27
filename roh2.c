#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0,temp,fact,r;
scanf("%d",&n);
temp=n;
while(n>0)
{
fact=1;
r=n%10;
for(i=1;i<=r;i++)
  {
  fact=fact*i;
  //sum=sum+fact;
   }
sum=sum+fact;
 n=n/10;}
  if(sum==temp)
  {
  printf("it is");
  }
  else
  printf("it is not");
  return 0;
}
