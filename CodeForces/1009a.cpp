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
    cin>>n>>m;
    stack <ll> s; 
    ll arr[n],brr[m];
    fr(i,0,n)
    {
        cin>>arr[i];
    }
    fr(i,0,m)
    {
        cin>>brr[i];
    }
    br(i,m-1,-1)
    {
       s.push(brr[i]); 
    }
    fr(i,0,n)
    {
        if(!s.empty())
        {
            if(s.top()>=arr[i])
            {
                cnt++;
                s.pop();
            }
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
}
