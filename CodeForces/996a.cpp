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
    ll n,sum=0;
    cin>>n;
    sum+=n/100;
    n=n%100;
    sum+=n/20;
    n=n%20;
    sum+=n/10;
    n=n%10;
    sum+=n/5;
    n=n%5;
    sum+=n;
    cout<<sum;
}
