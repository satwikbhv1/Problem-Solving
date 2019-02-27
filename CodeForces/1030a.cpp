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
    fr(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}
