#include <iostream>

using namespace std;
void duplicare(int &n)
{
    int uc,rez=0,pz=1;
    while(n!=0)
    {
        uc=n%10;
        if(uc%2==0)
        {
            rez=rez+(uc/2)*pz;
            pz*=10;
        }
        rez=uc*pz+rez;
        pz=pz*10;
        n=n/10;
    }
    n=rez;
}
int main()
{
    int n;
    cin>>n;
    duplicare(n);
    cout<<n;
    return 0;
}
