#include <iostream>

using namespace std;
int sum_div(int n)
{
    int sum=0,d;
    for(d=1;d<=n;d++)
        if(n%d==0)
            sum=sum+d;
    return sum;
}
int main()
{
    int i;
    for(i=2;i<=9999;i++)
        if(sum_div(i)==i+1)
            cout<<i<<" ";
    return 0;
}
