#include <iostream>

using namespace std;
/*14. Scrieti o functie care returneaza numarul divizorilor unui numar natural transmis ca
parametru. Prin apeluri succesive ale functiei definite sa se determine cel mai mic numar <=
decat un numar n citit  care are numar maxim de divizori propri.
*/
int nr_div(int n)
{
    int nrdiv=0,d;
    for(d=1; d<=n; d++)
        if(n%d==0)
            nrdiv++;
    return nrdiv;
}
int main()
{
    int n,divmax=0,minn=INT_MAX,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(nr_div(i)-2>divmax)
        {
            divmax=nr_div(i);
            minn=i;
        }
        else if(nr_div(i)-2==divmax)
            if(i<minn)
                minn=i;
    }
    cout<<minn;
    return 0;
}
