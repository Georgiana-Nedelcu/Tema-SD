#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    double start,stop;
    start= clock();
    int v[50],i,ok=0,n,aux;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    while(ok==0)
    {
        ok=1;
        for(i=1;i<n;i++)
        {
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=0;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    stop=clock();
    cout<<"\n";
    cout<<(stop-start);
    return 0;
}
