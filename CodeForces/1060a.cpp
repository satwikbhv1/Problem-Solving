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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll cnt=0;
    fr(i,0,n)
    {
        if(str[i]=='8')
        {
            cnt++;
        }
    }
    n=n/11;
    (cnt<n)?(cout<<cnt):(cout<<n);
}
