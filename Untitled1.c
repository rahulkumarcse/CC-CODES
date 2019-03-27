#include <stdio.h>
int main()
{

    int n,arr[10];
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i=0;i<n;i++)
        for(j=i+1;j<n;j++)

    {

        if(arr[i]>arr[j])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }

    }
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}
