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
ll fact(ll a)
{
    ll facto=1;
    while(a>1)
    {
        facto*=a;
        a--;
    }
    return facto;
}

int main()
{
    fast();
    ll n,m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<fact(m);
    }
    else
    {
        cout<<fact(n);
    }
}