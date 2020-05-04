#include <iostream>
#include"ensemble.h"
using namespace std;

int main()
{
    int n;
    ensemble e ;
    do
    {
        cout<<"donner un entier n"<<endl;
        cin>>n;
    }
    while(n<2);
    for(int i=2;i<=n;i++)
    {
        e.add(i);
    }
    do
    {
        int p=e.plus_petit();
        cout<<p<<endl;
        int j=1;
        do
        {
            if(e.est_pres(p*j))
            {
                e.del(p*j);
            }
            j++;
        }
        while(p*j>n);
    }
    while(e.est_vide());

}
