#include<iostream>
using namespace std;
int main()
{
    int n,v[50],f[100],i,max=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>max)
        {
            max=v[i];
        }
    }
    for(i=1;i<=max;i++)
    {
        f[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        f[v[i]]++;
    }
    for(i=1;i<=max;i++)
    {
            while(f[i]!=0)
        {
            cout<<i<<" ";
            f[i]--;
        }
    }
    return 0;

}
