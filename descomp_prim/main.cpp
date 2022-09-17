#include <iostream>

using namespace std;
/*6
Scrieti o functie mare_prim care primeste ca parametru un numar natural n si care retuneaza
cel mai mare numar prim care apare in descompunerea lui n in factori primi;
Folosind apeluri ale functie mare_prim sa se determine toate numerele prime de 3 cifre
*/
int mare_prim(int n)
{
    int d;
    d=2;
    while(d<=n && n!=1)
    {
        while(n%d==0)
            n=n/d;
        d++;
    }
    return d-1;
}
int main()
{
    int i;
    for(i=101;i<=997;i++)
        if(mare_prim(i)==i)
            cout<<i<<" ";
    return 0;
}
