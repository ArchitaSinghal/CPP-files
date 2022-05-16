#include <iostream>
using namespace std;
int main()
{

int i,n,a[10],sum=0,avg;
cout<<"Enter size of array";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter values of array";
cin>>a[i];
}
for (i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/5;
cout<<"sum="<<sum<<endl;
cout<<"avg="<<avg<<endl;

return 0;
}
