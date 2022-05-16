#include<iostream>
using namespace std;
int add(int x, int y);
float add(float p, float q);
int main()
{
  int a,b,s1;
  float m,n,s2;
  cout<<"enter integer values:" ;
  cin>>a>>b;
  cout<<"Enter float values:" ;
  cin>>m>>n;
  s1=add(a,b);
  s2=add(m,n);
  cout<<"Sum of integer = "<<s1<<endl;
  cout<<"sum of float="<<s2<<endl;
  return 0;
}

int add(int x,int y)
{
int z;
z=x+y;
return z;
}
float add(float p, float q)
{
int t;
t=p+q;
return t;
}
