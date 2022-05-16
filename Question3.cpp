#include<iostream>
using namespace std;
int taxCalculator(int x);
int main()
{
    int gs,s,t,ta;
    cout<<"enter gross salary: ";
    cin>>gs;
    cout<<"enter the savings: ";
    cin>>s;
    ta=gs-s;
    t=taxCalculator(ta);
    cout<<"tax to be paid= "<<t;
}

int taxCalculator(int x)
{
    int f;
    if(x<10000)
    {
        f=0;
    }
    else if(10000<x && x<200000)
    {
        f=0.1*x;
    }
    else if(200000<x&&x<500000)
    {
        f=0.1*x + 0.2*(x-200000);
    }
    else if(x>500000)
    {
        f=(0.3*x)+(0.3*(x-50000));
    }
    return f;
}
