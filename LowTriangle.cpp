#include<iostream>
using namespace std;
int main()
{
int i,j, a[10][10],m,n;
cout<<"enter rows and columns=";
cin>>m>>n;
cout<<"Matrix values";
for (i=0; i<m; i++)
{
  for (j=0; j<n ; j++)
  {
  cin>>a[i][j];
  }
}
cout<<"Lower triangle matrix:" <<endl;
for (i=0; i<m; i++)
{
for (j=0;j<n; j++)
{
if(i<j)
a[i][j]=0;
cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
