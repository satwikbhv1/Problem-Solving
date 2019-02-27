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
    ll n,k,flag=0;
    cin>>n;
    ll arr[10]={4,7,47,74,447,474,477,744,747,774};
    fr(i,0,10)
    {
        if(n%arr[i]==0)
        {
            flag=1;
            cout<<"YES";
            return 0;
        }
    }
    while(n>0)
    {
        if(n%10!=4&&n%7!=0)
        {
            cout<<"NO";
            return 0;
        }
        n=n/10;
    }
    cout<<"YES";
}
