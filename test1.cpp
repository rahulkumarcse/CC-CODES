#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	     int n;
	     cin>>n;
	     int arr[n];
	     int arr2[n];
	    for(int i=0;i<n;i++)
	     {
	          cin>>arr[i];
	     }
	    arr2[0]=arr[n-1];
	    int k=arr[n-1];
	    int l=0;
	     for(int i=n-2;n>=0;i--)
	     {
	         if(arr[i]>=arr2[l])
	         {
	             arr2[l++]=arr[i];
	         }
	     }
	     for(int i=0;i<n;i++){
	         cout<<arr2[i];
	     }
	}
	return 0;
}
