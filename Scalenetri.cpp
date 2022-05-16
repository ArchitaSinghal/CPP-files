#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter side=";
cin>>a>>b>>c;
if(a==b&&b==c&&c==a)
{
cout<<"equilateral triangle";
}
else if (a==b||b==c||c==a)
{
cout<<"isoceles triangle";
}
else
if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
{
cout<<"right angled triangle";
}
else
if (a!=b&&b!=c&&c!=a)
{cout<<"scalene triangle triangle";
}
}
