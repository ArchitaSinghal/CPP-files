#include<iostream>
using namespace std;
int main()
{
   int a[10][10], rows, cols, i, j, count=0;
   cout<<"\n Enter rows for array : ";
   cin>>rows;
   cout<<"\n Enter columns for array : ";
   cin>>cols;
   cout<<"\n Enter"<<rows<<"*"<<cols<<"Array elements: \n";
   for (i=0; i<rows; i++)
   {

       for(j=0; j<cols; j++)
       {
   cout<<" ";
   cin>>a[i][j];
   }

   }
   for(i=0; i<rows; i++)
   {
    for(j=0; j<cols; j++)
    {
    if (a[i][j]==0)
    count++;
    }
    }
    cout<<"\n Two dimensional array is : \n";
    for(i=0; i<rows; i++)
    {
    for(j=0; j<cols; j++)
    {
       cout<<" "<<a[i][j]<<" ";
    }
    cout<<"\n";
    }
    cout<<" the number of zeros in the matrix are "<<count<<endl;
    if(count>((rows*cols)/2))
    cout<<"this is a sparse matrix"<<endl;
    else
    cout<<"this is not a sparse matrix"<<endl;
    return 0;
}




