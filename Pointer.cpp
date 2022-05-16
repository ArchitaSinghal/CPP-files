#include<iostream>
using namespace std;
int main()
{
int a=10;
int *ptr;
ptr=&a;
*ptr=200;
cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<a;
return 0;
}
