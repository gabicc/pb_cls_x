#include <iostream>

using namespace std;
/*
Scrieti o functie cmmdc care primeste ca parametru doua numere natural a si b si returneaza
Cel mai mare divizor comun al lor
Folosind apeluri ale functie cmmdc sa se determine
a) Cel mai mic multiplu comun a doua numere date n si m.
b) Cate numere mai mici decat n n sunt prime cu n?
*/
int cmmdc(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else if(a<b)
            b=b-a;
    }
    return a;
}
int main()
{
    int n,m,cont=0,i;
    cin>>n>>m;
//a
    cout<<n*m/cmmdc(n,m)<<endl;
//b
    for(i=n-1;i>=2;i--)
        if(cmmdc(n,i)==1)
            cont++;
    cout<<cont;
    return 0;
}
