#include<bits/stdc++.h>
#define ll long long
#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)
using namespace std;
void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fast();
    ll n,m,k;
    cin>>n>>m>>k;
    ll res=0;
    while(k--)
    {
        if(((n+m)*2)-4>0)
        {
            res+=(((n+m)*2)-4);
        }
        else 
        {
            break;
        }
        if(n>4)
        {
            n-=4;
        }
        else
        {
            break;
        }
        if(m>4)
        {
            m-=4;
        }
        else
        {
            break;
        }
    }
    cout<<res;
}
