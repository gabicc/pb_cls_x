#include <iostream>
#include <math.h>
using namespace std;
void FRadical(int n, int &x, int &y)
{
    int gasit=0;
    x=sqrt(n);
    while(gasit==0 && x>=1)
    {
        if(n%(x*x)==0)
        {
            gasit=1;
            y=n/(x*x);
        }
        else
            x--;
    }
}
int main()
{
    int n,x,y;
    cin>>n;
    FRadical(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
