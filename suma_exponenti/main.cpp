#include <iostream>

using namespace std;
int sumexp(int n)
{
    int sumexp=0,d;
    d=2;
    while(d<=n && n!=1)
    {
        while(n%d==0)
        {
            sumexp++;
            n=n/d;
        }
        d++;
    }
    return sumexp;
}
int main()
{
    int n;
    cin>>n;
    if(sumexp(n)!=1)
        cout<<sumexp(n);
    return 0;
}
