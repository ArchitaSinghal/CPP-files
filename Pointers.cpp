#include<iostream>
using namespace std;
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int*ptr;
ptr=arr;
cout<<"First element:"<<*xptr<<endl;
ptr++;
cout<<"Second element:"<<*xptr<<endl;
ptr++;
cout<<"Third element:"<<*xptr<<endl;
ptr++;
cout<<"Fourth element:"<<*xptr<<endl;
ptr++;
cout<<"Fifth element:"<<*xptr<<endl;
ptr--;
cout<<"Fourth element:"<<*xptr<<endl;
ptr--;
cout<<"Third element:"<<*xptr<<endl;
ptr--;
cout<<"Second element:"<<*xptr<<endl;
ptr--;
cout<<"First element:"<<*xptr<<endl;
ptr--;

return=0;
}
