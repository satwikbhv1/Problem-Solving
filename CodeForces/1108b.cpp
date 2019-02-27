#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	// your code goes here
    ll n;
    cin>>n;
    ll arr[n];
    ll x=0,y=0;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(x<arr[i])
        {
            x=arr[i];
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(x%arr[i]!=0)
        {
            cnt++;
            if(y<arr[i])
            {
                y=arr[i];
            } 
        }
    }
    if(cnt==0)
    {
        sort(arr,arr+n);
        for(ll i=n;i>0;i--)
        {
            if(arr[i]==arr[i-1])
            {
                y=arr[i];
                break;
            }
        }
    }
    cout<<x<<" "<<y;
}
