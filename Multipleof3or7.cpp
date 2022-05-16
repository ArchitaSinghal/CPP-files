#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number=";
cin>>n;
if (n%3==0&&n%7==0)
{
cout<<"the number is a multiple of both 3 & 7"<<endl;
}
else if(n%3==0)
{
cout<<"the number is a multiple of 3"<<endl;
}
else if(n%7==0)
{
cout<<"the number is a multiple of 7"<<endl;
}
else
{ cout<<"the number is neither a multiple of 3 nor 7";
}
return 0;
}
