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
    ll n,ev=0,od=0;
    cin>>n;
    ll arr[n],o[n],e[n];
    fr(i,0,n)
    {
		cin>>arr[i];
		if(i%2==0)
		{
			ev+=arr[i];
		}
		else
		{
			od+=arr[i];
		}
		e[i]=ev;
		o[i]=od;
	}
	ll ans=0;
	fr(i,1,n-1)
	{
		if(i%2==0)
		{
			if(e[i-1]+o[n-1]-o[i-1]==o[i-1]+e[n-1]-e[i-1]-arr[i])
			{
				ans++;
			}
		}
		else
		{
			if(e[i-1]+o[n-1]-o[i-1]-arr[i]==o[i-1]+e[n-1]-e[i-1])
			{
				ans++;
			}
		}
	}
	if(o[n-1]+arr[0]== e[n-1])
	{
		ans++;
	}
	if(o[n-2]==e[n-2])
	{
		ans++;
	}
	cout<<ans;
}
