#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter marks obtained by the student";
    cin>>n;
    if(n<25)
    {
           cout<<"grade obtained=F marks obtained="<<n;
    }
     else if (25<n&&n<45)
    {
           cout<<"grade obtained=E marks obtained="<<n;
    }
    else if (45<n&&n<50)
    {
           cout<<"grade obtained=D marks obtained="<<n;
    }
    else if (50<n&&n<60)
    {
           cout<<"grade obtained=C marks obtained="<<n;
    }
     else if (60<n&&n<80)
     {
           cout<<"grade obtained=B marks obtained="<<n;
    }
    else if (n>80)
    {
           cout<<"grade obtained=A marks obtained="<<n;
    }
    return 0;
    }
