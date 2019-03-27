#include<iostream.h>
using namespace std;
#include<marh.h>
int main()
{
  int n;
  cin>>n;
  int i,count=0;
  while(n>0)
  {
  n=n/10;
  count++;
  }
  int sum=0;
  while(n>0)
  {
  int last=n%10;
  int power=pow(last,count);
  sumsum+power;
  n=n/10;
  }
  if(sum==n)
  cout<<"number is armstrong no";
  else
  printf("number is not armstrong");
  return 0;

}
