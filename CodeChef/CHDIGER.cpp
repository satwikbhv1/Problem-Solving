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
#define vpi vector< pair<ll,ll> > 
#define vpc vector< pair<char,char> > 
#define vpic vector< pair<ll,char> > 
#define vpci vector< pair<char,ll> > 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,min=10,cnt=0,cnt2=0,num=0,r=0;
        cin>>n>>k;
        while(n>0)
        {
            r=r*10+n%10;
            n=n/10;
        }
        n=r;
        while(n>0)
        {
            //cout<<cnt<<" ";
            if(min>n%10)
            {
                min=n%10;
                num=0;
                cnt=cnt2;
            }
            else
            {
                while(num%10>n%10)
                {
                    num=num/10;
                    cnt++;
                }
            }
            if(n%10<k)
            {
                num=num*10+n%10;
            }
            else
            {
                cnt++;
            }
            cnt2++;
            n=n/10;
        }
        if(num!=0)
        {
            cout<<num;
        }
        fr(i,0,cnt)
        {
            cout<<k;
        }
        cout<<"\n";
    }
}
