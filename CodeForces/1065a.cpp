#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    ll a,b,c,d,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        n=((double)a/(double)d);
        ans=((((ll)((double)n/(double)b))*c)+n);
        cout<<ans<<"\n";
    }
}
