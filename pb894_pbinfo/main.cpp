#include <iostream>

using namespace std;
/*
Să se scrie o funcție C++ care să determine cea mai mare
și cea mai mică cifră a unui număr natural transmis ca parametru.
Funcția va întoarce rezultatele prin intermediul unor parametri de ieşire.
*/
void cifminmax(int n, int &maxx, int &minn)
{
    minn=10;
    maxx=0;
    if(n==0)
        minn=0;
    while(n!=0)
    {
        if(n%10>maxx)
            maxx=n%10;
        if(n%10<minn)
            minn=n%10;
        n=n/10;
    }

}
int main()
{
    int n,a,b;
    cin>>n;
    cifminmax(n,a,b);
    cout<<a<<" "<<b;
}
