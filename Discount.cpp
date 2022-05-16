#include<iostream>
using namespace std;
int main()
{
   int d=10,a,t;
   cout<<"enter the amount to be paid by the customer=";
   cin>>a;
   if (a>1000)
   {
       t=a*d/100;
       a=a-t;
       cout<<"amount to be apid by the customer="<<a;
    }
    else
    {
       cout<<"amountto be paid nby the customer="<<a;
    }
    return 0;
    }
