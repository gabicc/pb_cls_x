#include <iostream>
#include <math.h>
using namespace std;
/*
Să se scrie o funcție C++ care, pentru un număr natural n
transmis ca parametru, determină și întoarce prin intermediul
unor parametri de ieșire cele mai mari două numere naturale prime mai mici decât n.
*/
void sub(int n, int &rez1, int &rez2)
{
    int d=n-1,cont=0,gasit,i;
    rez1=0;
    rez2=0;
    if(n>=4)
    {
        while(d>=2 && cont<2)
        {
            gasit=0;
            if(d==2)
                gasit=0;
            else
            {
                for(i=2; i<=sqrt(n); i++)
                    if(d%i==0)
                    {
                        gasit=1;

                    }
            }
            if(gasit==0 && rez1==0)
            {
                rez1=d;
                cont++;
            }
            else if(gasit==0 && rez1!=0 && rez2==0)
            {
                rez2=d;
                cont++;
            }
            d--;
        }
    }
}
int main()
{
    int a,b,c;
    cin>>a;
    sub(a,b,c);
    cout<<b<<" "<<c;
    return 0;
}
