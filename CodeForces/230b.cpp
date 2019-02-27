#include<bits/stdc++.h>

#define ll long long

#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)

#define mp make_pair
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front

#define dki deque <ll>
#define dkc deque <char>

#define vi vector<ll>
#define vc vector<char>
#define vpi vector< pair <ll,ll> >
#define vpc vector<pair<char,char> > 
#define vpic vector<pair<ll,char> > 
#define vpci vector<pair<char,ll> > 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll n;
    cin>>n;
    ll arr[n];
    ll sq;
    fr(i,0,n)
    {
        cin>>arr[i];
        sq=sqrt(arr[i]);
        ll flag=0;
        if(arr[i]==sq)
        {
            cout<<"NO\n";
        }
        else if(sq*sq==arr[i])
        {
           ll q=sqrt(sq);
            for(ll j=2;j<q+1;j++)
            {
                
                if(sq%j==0)
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"YES\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
