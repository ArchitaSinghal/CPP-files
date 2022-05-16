#include <iostream>
using namespace std;
int main()
{
int i,n,a[10], odd=0;
cout<<"Enter the size of Array";
cin>>n;
for (i=0;i<n;i++)
{
cout<<"Enter the values of array";
cin>>a[i];
}
for (i=0;i<n;i++)
{

if (a[i]%2!=0)
{
odd++;
}
}
cout<<"Count of odd numbers="<<odd;
return 0;
}
