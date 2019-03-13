#include<bits/stdc++.h>

#define ll long long

#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)

#define mp make_pair
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front

#define dki deque <ll>
#define dkc deque <char>

#define vi vector<ll>
#define vc vector<char>
#define vpi vector<pair<ll,ll>> 
#define vpc vector<pair<char,char>> 
#define vpic vector<pair<ll,char>> 
#define vpci vector<pair<char,ll>> 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n+1];
        fr(i,1,n+1)
        {
            cin>>arr[i];
        }
        ll sum,flag=0;
        fr(i,1,n+1)
        {
            sum=0;
            fr(j,i,n+1)
            {
               sum+=(arr[j]/(j-i+1));
            }
            if(sum<=k)
            {
                cout<<i<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<n+1<<"\n";
        }
    }
}
