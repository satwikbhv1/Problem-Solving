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
    ll n,t,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector <ll> arc;
        vector <ll> arr;
        fr(i,1,n+1)
        {
            arc.push_back(i);
            arr.push_back(i);
        }
        ll itr=k;
        while(itr--)
        {
            ll r,c;
            cin>>r>>c;
            arr[r-1]=0;
            arc[c-1]=0;
        }
        cout<<n-k<<" ";
        ll pr=0,pc=0;
        vector <ll> row;
        vector <ll> col;
        fr(i,0,n)
        {
            if(arr[i]!=0)
            {
                row.push_back(arr[i]);
            }
        }
        fr(i,0,n)
        {
            if(arc[i]!=0)
            {
                col.push_back(arc[i]);
            }
        }
        fr(i,0,n-k)
        {
            cout<<row[i]<<" "<<col[i]<<" ";
        }
        cout<<"\n";
    }
}
