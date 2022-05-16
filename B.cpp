#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
int n;
cout<<"enter number";
cin>>n;
if (n>0)
{
     cout<<"\n\nAbsolute value of the number given by the user="<<n;
}
else
{
     n=abs(n);
     cout<<"\n\nAbsolute value of the number given by the user="<<n;
}

return 0;
}
