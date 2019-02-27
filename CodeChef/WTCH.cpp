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
    ll n,t;
    cin>>t;
    string s;
    while(t--)
    {
        ll cnt=0;
        cin>>n;
        cin>>s;
        ll flag=0;
        fr(i,0,n)
        {
            if(s[i]=='1')
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ll ans=(n+1)/2;
            cout<<ans<<"\n";
        }
        else
        {
            fr(i,0,n)
            {
                if(i==0)
                {
                    if(s[0]!='1'&&s[1]=='0')
                    {
                        cnt++;
                        s[i]='1';
                    }
                }
                else if(i==n-1)
                {
                    if(s[n-1]!='1'&&s[n-2]=='0')
                    {
                        s[i]='1';
                        cnt++;
                    }
                }
                else
                {
                    if(s[i]!='1'&&s[i-1]=='0'&&s[i+1]=='0')
                    {
                        s[i]='1';
                        cnt++;
                    }
                }
            }
            cout<<cnt<<"\n";
        }
    }
}
