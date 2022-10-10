#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int L,l,arie[101],Lungime[101],latime[101],A,n=0,i,j,aux;
    ifstream fin("dreptunghi.in");
    fin>>L>>l;
    do
    {
        A=L*l;
        n++;
        arie[n]=A;
        Lungime[n]=L;
        latime[n]=l;
        fin>>L>>l;
    }
    while(!fin.eof());
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(arie[i]<arie[j])
            {
                aux=arie[i];
                arie[i]=arie[j];
                arie[j]=aux;
                aux=Lungime[i];
                Lungime[i]=Lungime[j];
                Lungime[j]=aux;
                aux=latime[i];
                latime[i]=latime[j];
                latime[j]=aux;
            }
    for(int i=1;i<=n;i++)
    {
        cout<<arie[i]<<"("<<Lungime[i]<<","<<latime[i]<<") \n";
    }
    return 0;
}
