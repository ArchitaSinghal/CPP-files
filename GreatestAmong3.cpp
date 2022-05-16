#include<iostream>
using namespace std;
int biggest(int x, int y, int z);
int main()
{
  int a,b,c,t;
  cout<<"enter the values:";
  cin>>a>>b>>c;
  t=biggest(a,b,c);
  cout<<"the biggest among three is: "<<t<<endl;
  return 0;
}
biggest(int x,int y, int z)
{
   int biggest;
   if(x>=y)
   {
      if (x>=z)
          return x;
   }
   else
   {
      if(y>=z)
          return y;
    else
    {
       return z;
    }
    }
}
