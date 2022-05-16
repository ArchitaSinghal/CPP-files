#include <iostream>
using namespace std;
int Series( int n)
{
int i;
int sums=0;
for (i=1; i<=n; i++)
sums +=(i*i);
return sums;
}
int main()
{
int n;
cout<<"Enter Number=";
cin>>n;
int s= Series(n);
cout<<s<<endl;
}
