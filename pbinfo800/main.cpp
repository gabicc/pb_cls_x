#include <iostream>

using namespace std;
int is_perfect(int n)
{
    int sum=0,d;

    for(d=1; d<=n/2; d++)
        if(n%d==0)
            sum=sum+d;
    if(sum==n)
        return 1;
    else
        return 0;
}
void perfect(int a, int b)
{
    int i,cont=0;
    for(i=b; i>=a; i--)
        if(is_perfect(i))
        {
            cout<<i<<" ";
            cont=1;
        }
    if(cont==0)
        cout<<"nu exista";
}
int main()
{
    int a,b;
    cin>>a>>b;
    perfect(a,b);
    return 0;
}
