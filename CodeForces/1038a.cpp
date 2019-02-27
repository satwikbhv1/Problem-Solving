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
    ll n,k;
    cin>>n>>k;
    ll b[k]={0};
    string s;
    cin>>s;
    ll cnt=0;
    ll min=n;
    fr(i,0,n)
    {
        b[(ll)s[i]-65]++;
    }
    fr(i,0,k)
    {
        if(min>b[i])
        {
            min=b[i];
        }
    }
    cout<<min*k;
}
