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
    ll x,y,z;
    ll a,b,c,s;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(x>a)
    {
        cout<<"NO";
    }
    else
    {
        a=a-x;
        if(y>(a+b))
        {
            cout<<"NO";
        }
        else
        {
            c=a+b+c-y;
            if(z>c)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }
        }
    }
}
