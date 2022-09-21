#include <iostream>
#include <math.h>
using namespace std;
/*16. Sa se afiseze descompunerea unui numar natural par, strict mai mare decat 2, intr-o suma
de doua numere prime. Se va utiliza o functie prim care returneaza 1 daca  un numar natural
transmis ca parametru este prim si 0 in caz contrar.
*/
int prim(int n)
{
    int d=2;
    while(d<=sqrt(n))
    {
        if(n%d==0)
            return 0;
        d++;
    }
    return 1;
}
int main()
{
    int n,i,gasit=0;
    cin>>n;
    i=2;
    while(i<=n-2 && gasit==0)
    {
        if(prim(i) && prim(n-i))
        {
            cout<<i<<" "<<n-i;
            gasit=1;
        }
        i++;
    }
    return 0;
}
