#include<stdio.h>
#include<math.h>
int main()
{
int num,n=0,copy,result=0,rem;
scanf("%d", &num);
copy=num;
while(n!=0)
{
num=num/10;
++n;
}
num=copy;
while(n!=0)
{
rem=num%10;
result=result+pow((rem),n);
num=num/10;
}
printf("sum is %d, num is %d",result,copy);
if(result==copy)
{
printf("it is arm");
}
else
printf("it is not");
return 0;
}
