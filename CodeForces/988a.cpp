#include<bits/stdc++.h>

#define ll long long

#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)

#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front

#define dki deque <ll>
#define dkc deque <char>

#define vi vector<ll>
#define vc vector<char>
#define vpi vector<pair<ll,ll>> 

#define mp make_pair

using namespace std;

void fast()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll n,m,cnt=1;
    cin>>n>>m;
    ll arr[n],brr[m];
    vpi v;
    fr(i,0,n)
    {
        cin>>arr[i];
        v.pub(mp(arr[i],i+1));
    }
    sort(v.begin(),v.end());
    brr[0]=v[0].second;
    fr(i,1,n)
    {
        if(v[i].first!=v[i-1].first)
        {
            brr[cnt]=v[i].second;
            cnt++;
        }
        if(cnt>=m)
        {
            cout<<"YES"<<"\n";
            fr(j,0,m)
            {
                cout<<brr[j]<<" ";
            }
            return 0;
        }
    }
    if(cnt>=m)
    {
        cout<<"YES"<<"\n";
        fr(j,0,m)
        {
            cout<<brr[j]<<" ";
        }
        return 0;
    }
    cout<<"NO";
}
