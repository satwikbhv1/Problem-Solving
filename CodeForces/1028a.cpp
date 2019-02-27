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
    ll n,m;
    cin>>n>>m;
    char arr[n][m];
    ll cnt=0;
    ll tj,ti;
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='B')
            {
                cnt++;
                tj=j;
            }
        }
        if(cnt>0)
        {
            ti=i+cnt/2;
            tj=tj-cnt/2;
            break;
        }
    }
    cout<<ti+1<<" "<<tj+1;
}
