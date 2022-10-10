#include <iostream>
#include <math.h>
using namespace std;
void citire(int a[], int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int interval(int a[],int n)
{
    int cont=2,minn,maxx;
    minn=min(a[0],a[n-1]);
    maxx=max(a[0],a[n-1]);
    for(int i=1;i<n-1;i++)
        if(a[i]>=minn && a[i]<=maxx)
        cont++;
    return cont;
}
int main()
{
    int a[101],n;
    citire(a,n);
    cout<<interval(a,n);
    return 0;
}
///63 273 9 83 93 123
