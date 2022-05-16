#include<iostream>
using namespace std;
int main()
{
int amount, i, temp;
int a[9]={2000,500,100,50,20,10,5,2,1};

cout<<"\nPlease enter the amount of cash=";
cin>>amount;
temp=amount;
for(i=0;i<9;i++)
{
cout<<a[i]<<"Notes is="<<temp/a[i]<<endl;
temp=temp%a[i];
}
return 0;
}
