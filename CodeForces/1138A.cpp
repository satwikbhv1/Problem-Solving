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
#define vpc vector<pair <char,char> > 
#define vpic vector<pair <ll,char> > 
#define vpci vector<pair <char,ll> > 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll n,cnt=0,cnt2=0,flag=0,max=0;
    cin>>n;
    ll a[n];
    fr(i,0,n+1)
    {
        cin>>a[i];
        if(i==0||(((a[i]!=a[i-1])||(i==n))&&flag==0))
        {
            flag=1;
            if(cnt<=cnt2)
            {
                if(max<cnt)
                {
                    max=cnt;
                }
            }
            else
            {
                if(max<cnt2)
                {
                    max=cnt2;
                }
            }
            cnt2=1;
        }
        else if(((a[i]!=a[i-1])||(i==n))&&flag==1)
        {
            flag=0;
            if(cnt<=cnt2)
            {
                if(max<cnt)
                {
                    max=cnt;
                }
            }
            else
            {
                if(max<cnt2)
                {
                    max=cnt2;
                }
            }
            cnt=1;
        }
        else if(a[i]==a[i-1]&&flag==0)
        {
            cnt++;
        }
        else if(a[i]==a[i-1]&&flag==1)
        {
            cnt2++;
        }
    }
    cout<<2*max;
}
