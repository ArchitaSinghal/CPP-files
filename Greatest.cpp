#include<iostream>
using namespace std;
int main()
{
int i;
int arr[10];

for (i=0;i<10;i++)
{
cout<<"Enter elements";
cin>>arr[i];
}

int greatest=-1111;
int j;
for (j=0;j<10;j++)
{
if (arr[j]>greatest)
{
greatest=arr[j];
}
else
{
continue;
}
}
cout<<"Greatest of all is "<< greatest;
}
