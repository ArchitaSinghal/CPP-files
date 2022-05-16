#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int YYYY,MM,DD;
    cout<<"Enter your date of birth:"<<endl;
    cin>>YYYY>>MM>>DD;
    cout<<"Enter today's date"<<endl;
    int YYYYY,MMM,DDD;
    cin>>YYYYY>>MMM>>DDD;
    if (MM==MMM && (DDD>=DD)){{cout<<"age in years:"<<YYYYY-YYYY<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)<<endl;}
    if(YYYY%4==0)
    {
        cout<<"Age in days is: "<<((YYYYY-YYYY)*366);
    }
    else
    {
        cout<<"Age in days is: "<<((YYYYY-YYYY)*365);
    }}
    else if(MM<MMM){cout<<"Age in years: "<<YYYYY-YYYY-1<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)-MM+MMM<<endl;
}
return 0;
}
