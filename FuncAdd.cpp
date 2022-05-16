#include<iostream>
using namespace std;
int add(int x, int y);
int main()
{
   int a,b,s;
   cout<<"Enter numbers:" ;
   cin>>a>>b;
   s=add(a,b);
   cout<<"sum= "<<s;
   return 0;
}
int add(int x,int y)
{
int z;
z=x+y;
return z;
}

