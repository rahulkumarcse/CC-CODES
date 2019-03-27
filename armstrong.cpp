#include <iostream>
using namespace std;
#include<math.h>
int main()
{
  int n,num;
  cin>>n;
  int check=num=n;
  int i,count=0;
  while(n>0)
  {
  n=n/10;
  count++;
  }
  int sum=0;
  while(num>0)
  {
  int last=num%10;
  int power=pow(last,count);
  sum=sum+power;
  num=num/10;
  }

  cout<<"sum is"<<sum<<" "<<"numberis :"<<check<<endl;
  if(sum==check)
  cout<<"number is armstrong no";
  else
  cout<<"number is not armstrong";
  return 0;

}
