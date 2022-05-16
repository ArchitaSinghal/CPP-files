#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the angles of a triangle";
cin>>a>>b>>c;
if (a+b+c==180&&a!=0&&b!=0&&c!=0)
{cout<<"triangle is valid";}
else
{cout<<"triangle is not valid";}

return 0;
}
