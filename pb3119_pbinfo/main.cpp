#include <iostream>

using namespace std;
/*
Subprogramul Impare are un singur parametru, n,
prin care primește un număr natural.
Subprogramul înlocuiește fiecare cifră impară a lui n
cu cea mai mare cifră pară strict mai mică decât ea
(astfel cifra 1 se înlocuieşte cu cifra 0, cifra 3 cu cifra 2 etc.)
și furnizează numărul obținut tot prin parametrul n.

Scrieți definiția completă a subprogramului.
*/
void Impare(int &n)
{
    int rez=0,pz=1;
    while(n!=0)
    {
        if(n%2==1)
            rez=(n%10-1)*pz+rez;
        else
            rez=n%10*pz+rez;
        pz=pz*10;
        n=n/10;
    }
    n=rez;
}
int main()
{
    int n;
    cin>>n;
    Impare(n);
    cout<<n;
    return 0;
}
