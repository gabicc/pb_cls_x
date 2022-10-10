#include <iostream>
#include <fstream>
using namespace std;

struct dreptunghi
{
    int L;
    int l;
};
int arie(dreptunghi d)
{
    return d.L*d.l;
}
int main()
{
    dreptunghi d[101],aux;
    int n=1,i,sortat=0;
    ifstream fin("date.in");
    fin>>d[1].L>>d[1].l;
    do
    {
        n++;
        fin>>d[n].L>>d[n].l;
    }
    while(!fin.eof());
    n--;
    do
    {
        sortat=1;
        for(i=1;i<=n-1;i++)
        {
            if(arie(d[i])<arie(d[i+1]))
            {
                aux=d[i];
                d[i]=d[i+1];
                d[i+1]=aux;
                sortat=0;
            }
        }
    }
    while(sortat==0);
    for(i=1;i<=n;i++)
        cout<<arie(d[i])<<" ("<<d[i].L<<","<<d[i].l<<") \n";
    return 0;
}
