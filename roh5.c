#include<stdio.h>
int main()
{
int i,n ,arr[10][10],j,k,search,count=0;
printf("enter the digit");
scanf("%d%d", &i,&n);
for(j=0;j<i;j++)
{
for(k=0;k<n;k++)
{
    scanf("%d",&arr[j][k]);
}
}
scanf("%d",&search);
for(j=0;j<i;j++)
{
for(k=0;k<n;k++)
{
    if(arr[j][k]==search)
 {
     printf("%d%d \n",j,k);
    count++;
}
}
}
if(count==0)
printf("-1,-1");
return 0;
}
