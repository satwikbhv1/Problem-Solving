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
    ll arr[n];
    ll sum=0;
    ll max=0;
    fr(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    fr(i,max,99999999999999999)
    {
        fr(j,0,n)
        {
            if(n*i>2*sum)
            {
                cout<<i;
                return 0;
            }
        }
    }
}
