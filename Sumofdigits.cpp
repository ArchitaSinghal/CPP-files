#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,a;
    cout<<"enter number= ";
    cin>>n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<"sum= "<<sum;
    return 0;
}
