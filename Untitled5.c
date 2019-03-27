#include<stdio.h>
void main()
{
int n,s,c=0,sum=0;
printf("enter the digit");
scanf("%d", &n);
int f=n;
while(n>0)
{
    s=n%10;
    c=s*s*s;
    sum=sum+c;
    n=n/10;
}
if(f==sum)
{
    printf("this is armstrong no");
}
else
{
    printf("it is not");
}

return 0;
}

