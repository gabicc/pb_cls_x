#include <iostream>

using namespace std;
/*
Se citeşte un şir X de numere naturale pozitive, citirea şirului terminându-se la introducerea
valorii 0 (Exemplu: dacă valorile introduse sunt 1, 2, 3, 0 atunci şirul citit va fi
( 1, 2, 3) X=(x1=1, x2=2, x3=3 , iar lungimea şirului citit va fi n  3 ). Să se scrie un program care
construieşte şi afişează şirul ( , ,... )

1 2 k Y  y y y conţinând, în ordine descrescătoare, numerele
palindroame distincte din şirul X. Un număr natural se numeşte palindrom dacă citit de la stânga la
dreapta sau de la dreapta la stânga reprezintă acelaşi număr (Exemplu: 131 este palindrom, iar 12
nu este palindrom). Şirul Y se va construi direct ordonat, fără a se face ordonarea ulterioară
construcţiei.
Exemple:  Pentru şirul X  (2,2442,2,13,131,1,313,44,677) se obţine Y  (2442,313,131,44,2,1) .  Pentru şirul X  (21,24,623) se va tipări mesajul 'Sirul Y e vid'.
Se vor folosi subprograme pentru: citirea unui şir, determinarea cifrelor unui număr, verificarea
dacă un număr este palindrom, construirea şirului Y şi tipărirea unui şir.
Programul se poate scrie într-unul dintre limbajele studiate la liceu (Pascal, C++ etc). Folosiţi
comentarii pentru a uşura înţelegerea soluţiei date (explicarea semnificaţiei identificatorilor folosiţi,
descrierea detaliilor de implementare etc).
*/
void citire(int X, int &n, int x[101])
{
    n=0;
    cin>>X;
    n++;
    x[n]=X;
    while(X!=0)
    {
        cin>>X;
        n++;
        x[n]=X;
    }
    n--;
}
int palindrom(int n)
{
    int inv=0,cn,uc;
    cn=n;
    while(cn!=0)
    {
        uc=cn%10;
        inv=inv*10+uc;
        cn=cn/10;
    }
    if(inv==n)
        return 1;
    else
        return 0;
}
int cont_palindrom(int a[101], int n)
{
    int i, cont=0;
    for(i=1;i<=n;i++)
        if(palindrom(a[i]))
        cont++;
    return cont;
}
void vector_Y(int a[101], int n, int Y[101])
{
    int i, cont=0;
    for(i=1;i<=n;i++)
        if(palindrom(a[i]))
        {
            cont++;
            Y[cont]=a[i];
        }
    for(i=1;i<=cont;i++)
        cout<<Y[i]<<" ";
}
int main()
{
    int X,n=0,sortat=0,aux,i,Y[101];
    int x[101];
    citire(X,n,x);
    do
    {
        sortat=1;
        for(i=1;i<=n-1;i++)
        {
            if(x[i]<x[i+1])
            {
                aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                sortat=0;
            }
        }
    }
    while(sortat==0);
    vector_Y(x,n,Y);
    return 0;
}
