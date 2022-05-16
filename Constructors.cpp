#include<iostream>
using namespace std;
class rectangle {
int l,b;
public:[]
    rectangle(int x, int y)
{

    l=x;
    b=y;
}
void display(){

cout<<"\nArea of rectangle="<<l*b;
}
};
int main()
{

    rectangle r(8,9);
    r.display();
    return 0;
}
