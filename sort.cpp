#include <iostream>
using namespace std;
int main()
{ 
int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n+1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			arr[i]=arr[i+1];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
