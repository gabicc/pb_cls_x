#include <iostream>
#include <math.h>
using namespace std;
/*
Scrieţi definiţia completă a subprogramului C/C++
modificare, care are doi parametri, v şi n, prin
care primeşte un tablou unidimensional cu maximum
10000 de numere naturale nenule şi, respectiv, numărul
de elemente din tablou. Subprogramul rearanjează elementele
tabloului astfel încât toate valorile prime să se afle pe
primele poziţii, iar valorile care nu sunt prime, în continuarea celor prime.
Ordinea în cadrul ambelor secvenţe (numerele prime
şi cele care nu sunt prime), poate fi oricare.
*/
void citire(int v[], int &n)
{
    cin>>n;
    int i;
    for(i=0;i<n;i++)
        cin>>v[i];
}
int prim(int n)
{
    int d=2, gasit=0;
    if(n>=2)
    {
        while(d<=sqrt(n) && gasit==0)
        {
            if(n%d==0)
                gasit=1;
            d++;
        }
        return !gasit;
    }
    else return 0;
}
void modificare(int v[], int n)
{
    int prime[10000], nepr[10000],p=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(prim(v[i]))
        {
            prime[p]=v[i];
            p++;
        }
        else
        {
            nepr[m]=v[i];
            m++;
        }
    }
    for(int i=0;i<p;i++)
        v[i]=prime[i];
    for(int i=0;i<m;i++)
        v[i+p]=nepr[i];
}
int main()
{
    int v[1000],n;
    citire(v,n);
    modificare(v,n);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
