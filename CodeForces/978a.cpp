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
    ll n,cnt=0;
    cin>>n;
    ll arr[n],brr[1001];
    vi crr;
    fr(i,0,1001)
    {
        brr[i]=50;
    }
    fr(i,0,n)
    {
        cin>>arr[i];
        //cout<<i<<" "<<arr[i]<<" "<<" "<<brr[arr[i]]<<"\n";
        brr[arr[i]]=i;
        //cout<<i<<" "<<arr[i]<<" "<<" "<<brr[arr[i]]<<"\n";
    }
    fr(i,0,1001)
    {
        if(brr[i]!=50)
        {
            //cout<<i<<" "<<brr[i]<<"\n";
            crr.pub(brr[i]);
            cnt++;
        }
    }
    sort(crr.begin(),crr.end());
    cout<<cnt<<"\n";
    fr(i,0,cnt)
    {
        cout<<arr[crr[i]]<<" ";
    }
}
