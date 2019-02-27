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

using namespace std;

void fast()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll n,m;
    cin>>n>>m;
    ll arr[n],brr[m];
    fr(i,0,n)
    {
        cin>>arr[i];
    }
    fr(i,0,m)
    {
        cin>>brr[i];
    }
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            if(arr[i]==brr[j])
            {
                cout<<arr[i]<<" ";
                j=-1;
                i++;
            }
        }
    }
    
}
