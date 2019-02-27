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
    ll n,sum=0,k;
    cin>>n;
    ll arr[n];
    fr(i,0,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll size =n/2;
    fr(i,0,size)
    {
        k=arr[i]+arr[n-i-1];
        //cout<<k;
        k=k*k;
        //cout<<" "<<k<<" ";
        sum+=k;
    }
    cout<<sum;
}
