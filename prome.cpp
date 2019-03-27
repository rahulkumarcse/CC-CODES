#include <iostream>
using namespace std;
int fibo(int n);
int prime(int n);
int main()
{
	int n;
	cin>>n;
	 int arr[100];
	 int i;
	 for(i=1;i<=n;i++)
	 { if((i%2)==0)
	 	{
		 arr[2*i]=fibo(n);
	}
	else
	 	arr[i]=prime(n);
	 }
	 for(i=0;i<n;i++)
	 {
	 	cout<<arr[i];
	 }
}
int fibo(int n)
{
	static int a,b,c;
	a=1;
	b=1;
	c=a+b;
	a=b;
	b=c;
	return c;
	
}
int prime(int d)
{
	static int j;
	for(d=2; d<=2; d++)
   {
     for(j=1; j<=d/2; j++)
      if(d%j!=0)
      return d;
   }

}
