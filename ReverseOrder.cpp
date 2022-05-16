#include <iostream>
using namespace std;
int main()
{
int i,n,a[10],r;
cout<<"Enter the size of array";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter values= ";
cin>>a[i];
}
cout<<"Reverse Order :"<<endl;
for(i=n-1;i>0;i--)
{
cout<<a[i]<<endl;
}
return 0;
}
