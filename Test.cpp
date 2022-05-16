#include<iostream>
using namespace std;
int main()
{
float m;
cout<<"enter marks obtained by the student=";
cin>>m;
if (9<m&&m<=10)
{
cout<<"Grade=A+";
}
else if (8<m&&m<=9)
{
cout<<"Grade=A";
}
else if (7<m&&m<=8)
{
cout<<"Grade=B+";
}
else if (6<m&&m<=7)
{
cout<<"Grade=B";
}
else if (5<m&&m<=6)
{
cout<<"Grade=C";
}
else if (4<m&&m<=5)
{
cout<<"Grade=D";
}
else if(m<=4)
{
cout<<"Student Failed";
}
return 0;
}
