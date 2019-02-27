#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(ll i=n-2;i>=0;i--)
    {
        if(i%2!=0)
        {
            arr[n-1]+=arr[i];
        }
        else
        {
            arr[n-1]=arr[n-1]-arr[i];
        }
    }
    cout<<arr[n-1];
}
