#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
/*
Scrieti o functie mare care primeste ca parametru un numar natural n si care retuneaza cel mai
mare divizor propriu. Folosind apeluri successive ale functiilor mare si prim sa se determine toate
numerele aflate pe prima linie a fisierului date.in care au cel mai mare divizor proipriu numar
prim.
*/
int prim(int n)
{
    int d;
    d=2;
    if(n<=1)
        return 0;
    while(d<=sqrt(n))
    {
        if(n%d==0)
            return 0;
        d++;
    }
    return 1;
}
int mare(int n)
{
    int d;
    d=n/2;
    while(d>=2)
    {
        if(n%d==0)
        {
            return d;
        }
        d--;
    }
    return 1;
}
int main()
{
    ifstream fin("date.in");
    int a;
    while(!fin.eof())
    {
        fin>>a;
        if(!fin.eof())
            if(prim(mare(a)))
                cout<<a<<" ";
    }
    return 0;
}
