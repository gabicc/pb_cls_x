#include <iostream>

using namespace std;
/*
Să se scrie o funcție C++ care primește ca parametri două numere n și k
și determină numărul format din primele k cifre ale lui n.
Funcția va întoarce rezultatul prin intermediul unui parametru de ieşire.
*/
void prefix(int n, int k,int &rez)
{
    rez=0;
    int uc,pz=1,cfr=0,cn=n;
    while(cn!=0)
    {
        cn/=10;
        cfr++;
    }
    int o=cfr-k;
    while(o!=0)
    {
        n=n/10;
        o--;
    }
    rez=n;
}
int main()
{
    int x;

    prefix(27594 , 3 , x);

    cout<<x;
    return 0;
}
