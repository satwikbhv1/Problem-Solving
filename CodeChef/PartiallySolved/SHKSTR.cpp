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
    string str[n];
    fr(i,0,n)
    {
        cin>>str[i];
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        string s;
        cin>>s;
        ll count[a];
        ll max = 0;
        fr(i,0,a)
        {
            count [i]=0;
            fr(j,0,10)
            {
                if(str[i][j]==s[j])
                {
                    count[i]++;
                }
                else
                {
                    break;
                }
            }
            if(count[i]>max)
            {
                max = count[i];
            }
        }
        vector<string>v;
        fr(i,0,a)
        {
            if(count[i]==max)
            {
                v.pub(str[i]); 
            }
        }
        string min=v[0];
        fr(i,1,v.size())
        {
            if(min.compare(v[i])>0)
            {
                min=v[i];
            }
        }
        cout<<min<<"\n";   
    }
}    
