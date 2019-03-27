#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    int n,d;
	    cin>>n;
	    int arr[20];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>d;
	    for(int i=d;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    for(int i=0;i<d;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
