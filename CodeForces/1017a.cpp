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
    ll arr[n]={0};
    ll temp;
    ll score;
    ll cnt=1;
    fr(i,0,n)
    {
        fr(j,0,4)
        {
            cin>>temp;
            arr[i]+=temp;
        }
        if(i==0)
        {
            score=arr[0];
        }
        else if(score<arr[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
}
