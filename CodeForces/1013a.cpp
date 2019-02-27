#include<bits/stdc++.h>
#define ll long long
#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)
using namespace std;
void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fast();
    ll n;
    cin>>n;
    ll arr[n],brr[n];
    ll cnt=0,cnt2=0;
    fr(i,0,n)
    {
        cin>>arr[i];
        cnt+=arr[i];    
    }
    fr(i,0,n)
    {
        cin>>brr[i];
        cnt2+=brr[i];
    }
    if(cnt>=cnt2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
