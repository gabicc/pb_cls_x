#include <iostream>

using namespace std;
void produs(int a, int &k)
{
    int P=1,gasit=0;
    k=1;
    if(a<=2)
        k=1;
    else
    {
        while(gasit==0)
        {
            P=P*k;
            if(P>a)
                gasit=1;
            k=k+2;
        }
        k=k-4;
    }
}
int main()
{
    int n,k;
    cin>>n;
    produs(n,k);
    cout<<k;
    return 0;
}
