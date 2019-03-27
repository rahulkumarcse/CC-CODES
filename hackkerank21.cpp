#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sp=0;
    int np=0;
    int zero=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>0)
       {
           sp++;
       }
       else if(arr[i]<0)
       {
           np++;
       }
       else if(arr[i]==0)
       {
           zero++;
       }
    }
    cout<<sp<<" "<<np<<" "<<zero<<endl;
    double sip = (double)sp/n;
    //double nip = np/n;
    //double zeiro = zero/n;
    cout<<sip<<endl;
    //cout<<nip<<endl;
    //cout<<zeiro<<endl;
    return 0;
}
