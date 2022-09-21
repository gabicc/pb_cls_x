#include <iostream>

using namespace std;
int func(int* n)
{
    (*n)++;
    return (*n)-10;
}
int main()
{
    int i=21;
    int a=func(&i);
    cout<<i<<" "<<a;
    return 0;
}
