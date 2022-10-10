#include <iostream>

using namespace std;
/*
Scrieți definiția completă a funcției C++
sub care primește doi parametri n și k și determină
afișarea pe ecran, în ordine descrescătoare, a
primelor n numere naturale nenule divizibile cu k.
*/
void sub(int n, int k)
{
    int i;
    for(i=n;i>=1;i--)
        cout<<i*k<<" ";
}
int main()
{
    int n,k;
    cin>>n>>k;
    sub(n,k);
    return 0;
}
