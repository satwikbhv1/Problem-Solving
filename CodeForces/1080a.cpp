#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,ans=0;
    cin>>a>>b;
    c=2*a;
    d=5*a;
    e=8*a;
    if(c%b==0)
    {
        ans+=c/b;
    }
    else
    {
        ans+=c/b+1;
    }
    if(d%b==0)
    {
        ans+=d/b;
    }
    else
    {
        ans+=d/b+1;
    }
    if(e%b==0)
    {
        ans+=e/b;
    }
    else
    {
        ans+=e/b+1;
    }
    cout<<ans;
}
