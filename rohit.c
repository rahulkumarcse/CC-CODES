#include<stdio.h>
int main()
{
int i,r,sum=0,num,temp=0;
printf("enter the digit");
scanf("%d", &num);
temp=num;
while(num>0)
{
r=num%10;
 int fact=1;
for(i=1;i<=i;i++)
 {
 fact=i*fact;
 sum=sum+fact;
 num=num/10;
 }
}
if(sum==temp)
printf("it is");
else
printf("it is not");
return 0;
}
