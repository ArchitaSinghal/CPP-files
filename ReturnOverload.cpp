#include<iostream>
using namespace std;
int area();
int main()
{
int c,d,t;
c=area();
d=area();
t=area();
cout<<"RETURN 2"<<endl;
cout<<"area:"<<c<<endl;
cout<<"perimeter:"<<d;
cout<<"RETURN 3"<<endl;
cout<<"sum: "<<
return 0;
}

int area()
{
int l,b,a,p;
cout<<"enter values=";
cin>>l>>b;
a=l*b;
return a;
cout<<"enter values=";
cin>>l>>b;
p=2*(l+b);
return p;
}

int area()
{
int l,b,a,p,s;
cout<<"enter value=";
cin>>l>>b;
p=2*(l+b);
return p;
cout<<"enter values";
cin>>l>>b;
s=a+b;
return s;
}
