#include <iostream>

using namespace std;
/*
Scrieți funcția inserare care primește ca parametru un număr natural n
și furnizează prin intermediul aceluiași parametru numărul obținut din n
prin inserarea, între oricare două cifre alăturate ale sale, a valorii absolute a diferenței acestora.
*/
void inserare(int &n)
{
    int rez=0,pz=1,x;
    while(n>9)
    {
        x=abs(n%10-(n/10)%10);
        rez=n%10*pz+rez;
        pz=pz*10;
        rez=x*pz+rez;
        pz=pz*10;
        n=n/10;
    }
    rez=n*pz+rez;
    n=rez;
}
int main()
{
    int n;
    cin>>n;
    inserare(n);
    cout<<n;
    return 0;
}
