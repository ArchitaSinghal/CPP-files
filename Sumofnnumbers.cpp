#include<iostream>
using namespace std;
int main()
{
int i,n=1,sum=0;
cout<<"enter";
cin>>i;
do
{
sum=sum+n;
n++;
}

while (n<=i);
cout<<"Sum of n numbers="<<sum;
return 0;
}
