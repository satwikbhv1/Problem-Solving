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
#define vpi vector< pair <ll,ll> >
#define vpc vector<pair<char,char> > 
#define vpic vector<pair<ll,char> > 
#define vpci vector<pair<char,ll> > 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll n,a;
    cin>>n;
    vpi v;
    fr(i,0,2*n)
    {
		cin>>a;
		v.pub(mp(a,i));
		//cout<<a<<" ";
	}
	sort(v.begin(),v.end());
	ll sum=v[0].second+v[1].second;
	fr(i,2,2*n)
	{
		sum+=abs(v[i].second-v[i-2].second);
		//cout<<sum<<" ";
	}
	cout<<sum;
}
