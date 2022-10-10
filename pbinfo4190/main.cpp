#include <iostream>
#include <math.h>
using namespace std;
void patrate(int n, int &x, int &y)
{
    int gasit=0;
    x=2;
    while(x<=sqrt(sqrt(n)) && gasit==0)
    {
        if(n%(x*x)==0 && sqrt(n/(x*x))==int(sqrt(n/(x*x))) && x<sqrt(n/(x*x)))
        {
            y=sqrt(n/(x*x));
            gasit=1;
        }
        else
            x++;
    }
    if(gasit==0)
    {
        x=0;
        y=0;
    }
}
int main()
{
    int n,x,y;
    cin>>n;
    patrate(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
