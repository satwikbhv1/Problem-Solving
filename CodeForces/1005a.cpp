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
    ll n,cnt=1;
    cin>>n;
    ll arr[n];
    fr(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]==1&&i!=0)
        {
            cnt++;
            arr[cnt-2]=arr[i-1];
        }
    }
    arr[cnt-1]=arr[n-1];
    cout<<cnt<<"\n";
    fr(i,0,cnt)
    {
        cout<<arr[i]<<" ";
    }
}
