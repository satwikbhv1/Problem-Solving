#include <bits/stdc++.h>
using namespace std;
#define ll long
int main() {
    // your code goes here
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll cnt=0;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (ll j = 0; j < n-1; j++)
        {
            for (ll k = j + 1; k < n; k++)
            {
                if((arr[j]^arr[k])%2==0&&(arr[j]^arr[k])>=4)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}

