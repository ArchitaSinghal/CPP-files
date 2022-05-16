#include<iostream>
using namespace std;
class demo
{
  int d;
public:
       demo(int d)
       {
        this->d=d;
       }
       void show()
       {
       cout<<"value= "<<d;
       }
};
int main()
{
 demo obj(100);
 obj.show();
 return 0;
 }
