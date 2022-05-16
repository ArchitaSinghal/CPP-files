#include<iostream>
#include<string.h>
using namespace std;
int main()
{

char i, *str;
cout<<" Original string :";
cin>>str;
cout<<endl<<" String after reverse : ";
for (i=(strlen(str)-1);i>=0;i--)
{cout<<str[i];

}
return 0;
}
