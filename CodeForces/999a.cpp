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
    ll n,m,cnt=0;
    deque <ll> dq; 
    cin>>n>>m;
    ll arr[n];
    fr(i,0,n)
    {
        cin>>arr[i];
        dq.push_back(arr[i]);
    }
    while(dq.front()<=m)
    {
        dq.pop_front();
        cnt++;
    }
    while(!dq.empty()&&dq.back()<=m)
    {
        dq.pop_back();
        cnt++;
    }
    cout<<cnt;
}
