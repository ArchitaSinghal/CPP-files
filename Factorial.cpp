#include<iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"enter number";
    cin>>n;

     f=1;
    while(n>=1)
    {
    f=f*n;
    n--;
    }
    cout<<"factorial of the number= "<<f;
    return 0;
}
