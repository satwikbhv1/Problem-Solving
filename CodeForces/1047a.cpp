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
    cout<<"1"<<" ";
    if(n%3==0||n%3==1)
    {
        cout<<"1"<<" "<<n-2;
    }
    else
    {
        cout<<"2"<<" "<<n-3;
    }
}
