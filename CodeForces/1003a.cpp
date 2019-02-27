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
    ll n,cnt=0,max=1;
    cin>>n;
    ll arr[n];
    fr(i,0,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    fr(i,0,n)
    {
        if(i!=0&&arr[i]!=arr[i-1])
        {
            if(cnt>max)
            {
                max=cnt;
            }
            cnt=0;
        }
        cnt++;
    }
    if(cnt>max)
    {
        max=cnt;
    }
    cout<<max;
}
