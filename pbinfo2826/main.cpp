#include <iostream>

using namespace std;
void duplicare(int n, int &d)
{
    int rez=0,uc,pz=1,cpare=0;
    while(n!=0)
    {
        uc=n%10;
        if(uc%2==0)
        {
            rez=uc*pz+rez;
            pz*=10;
            cpare++;
        }
        rez=uc*pz+rez;
        pz=pz*10;
        n=n/10;
    }
    d=rez;
    if(cpare==0)
        d=-1;
}
int main()
{
    int n,d;
    cin>>n;
    duplicare(n,d);
    cout<<d;
    return 0;
}
