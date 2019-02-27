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
    ll n,m,k,cost=0;
    cin>>n>>m>>k;
    ll arr[n];
    fr(i,0,n)
    {
        cin>>arr[i];
    }
    fr(i,0,n)
    {
        if(arr[0]<arr[i])
        {
            ll temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
    }
    fr(i,1,n)
    {
        if(arr[1]<arr[i])
        {
            ll temp=arr[1];
            arr[1]=arr[i];
            arr[i]=temp;
        }
    }
    cost=(m/(k+1))*((k*arr[0])+arr[1])+(m%(k+1))*(arr[0]);
    cout<<cost;
}
