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
    ll x,y,z,t1,t2,t3,s,e;
    cin>>x>>y>>z>>t1>>t2>>t3;
    s=(abs(x-y))*t1;
    e=(abs(x-y))*t2+(abs(x-z))*t2+3*t3;
    if(s<e)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
