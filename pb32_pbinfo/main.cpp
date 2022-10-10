#include <iostream>

using namespace std;
/*
Să se scrie definiția completă a funcției C++ P
care primește prin intermediul parametrului n un număr
natural cu cel mult 9 cifre, iar prin intermediul parametrului c o cifră.
Funcția întoarce tot prin intermediul parametrului n
numărul obținut prin eliminarea tuturor aparițiilor cifrei c.
*/
void P(int &n,int c)
{
    int rez=0;
    int pz=1;
    while(n!=0)
    {
        if(n%10!=c)
        {
            rez=n%10*pz+rez;
            pz*=10;
        }
        n=n/10;
    }
    n=rez;
}
int main()
{
    int n,c;
    cin>>n>>c;
    P(n,c);
    cout<<n;
    return 0;
}
