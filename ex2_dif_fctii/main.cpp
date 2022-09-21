#include <iostream>

using namespace std;
/*
Fct care returneza 10 la putere k (k&lt;9)
Fct care verifica daca un numar are toate cifrele identice si returneaza 1 in caz afirmativ sau 0 in
caz contrar
Fct care returneaza numarul cifrelor lui n in
Functie care returneaza inversul unui numar.
*/
int putere_10(int k)
{
    int rez=1;
    while(k!=0)
    {
        rez=rez*10;
        k--;
    }
    return rez;
}
int aceleasi_cfr(int n)
{
    int pastrare=n%10,uc;
    n=n/10;
    while(n!=1)
    {
        uc=n%10;
        if(uc!=pastrare)
            return 0;
        n=n/10;
    }
    return 1;
}
int baza_k(int n, int k)
{
    int nrcfr=0;
    while(n>0)
    {
        nrcfr++;
        n=n/k;
    }
    return nrcfr;
}
void afiseaza_baza_k(int n,int k)
{
    long long rez=0,pz=1;
    while(n>0)
    {
        cout<<n%k;
        //rez=(n%k)*pz+rez;
        n=n/k;
        pz=pz*10;
    }
    //return rez;
}
int invers(int n)
{
    int rez=0,uc;
    while(n!=0)
    {
        uc=n%10;
        n=n/10;
        rez=rez*10+uc;
    }=
    return rez;
}
int main()
{
    int a,b;
    cin>>a;
    cout<<putere_10(a)<<endl;
    cin>>b;
    cout<<aceleasi_cfr(b)<<endl;
    int c,k;
    cin>>c>>k;
    cout<<baza_k(c,k)<<endl;
    afiseaza_baza_k(c,k);
    cout<<endl<<invers(c);
    return 0;
}
