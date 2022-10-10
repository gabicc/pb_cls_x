#include <iostream>

using namespace std;
/*
Scrieţi definiţia completă a subprogramului C/C++
aranjare, care are doi parametri, v şi n, prin care
primeşte un tablou unidimensional cu maximum 10000
de numere naturale nenule şi, respectiv, numărul de
elemente din tablou. Subprogramul rearanjează elementele
tabloului astfel încât toate valorile impare să se afle pe
primele poziţii, iar valorile pare în continuarea celor impare.
Ordinea în cadrul secvenţei de elemente pare, respectiv în
cadrul secvenţei de elemente impare, poate fi oricare.
*/
void citire(int v[], int &n)
{
    cin>>n;
    for(int i=0; i<=n-1; i++)
        cin>>v[i];
}
void aranjare(int v[], int n)
{
    int i,j,aux;
    i=0;
    j=1;
    while(i<n && j<n)
    {
        while(v[i]%2==1 && i<n)
            i++;
        j=i+1;
        while(v[j]%2==0 && j<n)
            j++;
        if(i<n && j<n)
        {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            i++;
            j++;
        }
    }
}
int main()
{
    int v[10000],n;
    citire(v,n);
    aranjare(v,n);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
///21 37 42 7 48 25 9
