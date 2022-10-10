#include <iostream>

using namespace std;
/*
Un interval cu proprietatea că există un singur număr natural,
n (2≤n), pentru care valoarea produsului 1·2·3·...·n aparține
acestui interval este numit interval factorial al lui n.
Exemplu: [5,8] și [3,23] sunt intervale factoriale ale
lui 3, dar [1,15] și [7,10] nu sunt intervale factoriale ale niciunui număr.
*/
int factorial(int n)
{
    int rez=1;
    for(int i=1;i<=n;i++)
        rez=rez*i;
    return rez;
}
void interval(int n, int&a, int &b)
{
    a=factorial(n-1)+1;
    b=factorial(n+1)-1;
}
int main()
{
    int n,a,b;
    cin>>n;
    interval(n,a,b);
    cout<<a<<" "<<b;
    return 0;
}
