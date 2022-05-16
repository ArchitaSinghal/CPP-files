#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter the age of the citizen=";
   cin>>a;
   if(a<18)
   {
       cout<<"citizen is minor and not eligible";
    }
    else if (18<a&&a<60)
{
   cout<<"citizen is eligible with least priority";
   }
else if(a>60)
{
   cout<<"citizen is eligible with highest priority";
   }
    return 0;
    }
