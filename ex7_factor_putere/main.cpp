#include <iostream>
#include <fstream>
using namespace std;
/*
Scrieti o functie factor_ putere care primeste ca parametru un numar natural n si care retuneaza
factorul care apare la puterea cea mai mare in descompunerea lui n in factori primi; daca sunt
mai multi factori se va returna cel mai mic.
Folosind apeluri ale functie factor_ putere sa se afiseze factorul care apare la puterea cea mai
mare pentru toate numerele din fisierul date.in
*/
int factor_putere(int n)
{
    int fmin=1,pmax=0,d=2,putere;
    while(n!=1)
    {
        putere=0;
        while(n%d==0)
        {
            n=n/d;
            putere++;
            if(putere>pmax)
            {
                pmax=putere;
                fmin=d;
            }
        }
        d++;
    }
    return fmin;
}
int main()
{
    ifstream fin("date.in");
    int a;
    fin>>a;
    do
    {
        cout<<factor_putere(a)<<" ";
        fin>>a;
    }
    while(!fin.eof());
    return 0;
}
