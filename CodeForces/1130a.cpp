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
    ll neg,p=0,n=0;
    cin>>neg;
    ll arr[neg];
    fr(i,0,neg)
    {
		cin>>arr[i];
		if(arr[i]>0)
		{
			p++;
		}
		else if(arr[i]<0)
		{
			n++;
		}
	}
	if(p>=(ll)((neg+1)/2))
	{
		cout<<"1";
	}
	else if(n>=(ll)((neg+1)/2))
	{
		cout<<"-1";
	}	
	else
	{
		cout<<"0";
	}
}
