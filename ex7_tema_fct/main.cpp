#include <iostream>

using namespace std;
/*7.Scrieti o functie care primeste ca parametru un numar natural n si returneaza
complementul lui n, adica numarul cu cifrele complementare cifrelor lui n fata de 9. Ex:
n=28590 => complementul = 71409
*/
int complement(int n)
{
    int rez=0,pz=1,uc;
    while(n!=0)
    {
        uc=9-(n%10);
        rez=rez+uc*pz;
        pz=pz*10;
        n=n/10;
    }
    return rez;
}
int main()
{
    long long n;
    cin>>n;
    cout<<complement(n);
    return 0;
}
