#include<stdio.h>
int main()
{
int n,i,j,temp,arr[5];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j=i+1;j++)
{
     if(arr[i]<arr[j])
     {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     }}
     for(i=0;i<n;i++)
     {
     printf("%d",arr[j]);
}}
return 0;
}
