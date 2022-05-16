#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"enter character";
cin>>ch;
if (ch>=65&&ch<=90)
cout<<"Capital alphabet";
else
if (ch>=97&&ch<=122)
cout<<"Small alphabet";
else
if (ch>=48&&ch<=57)
cout<<"Digit";
else
cout<<"Special Symbols";
return 0;
}
