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
#define vpi vector<pair<ll,ll>> 
#define vpc vector<pair<char,char>> 
#define vpic vector<pair<ll,char>> 
#define vpci vector<pair<char,ll>> 

using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();
    ll t,n,maxcnt,cnt;
    cin>>t;
    string s;
    lbl: while(t--)
    {
        cnt=0;
        cin>>n;
        cin>>s;
        string k,str;
        vi v;
        maxcnt=0;
        //cout<<s;
        fr(i,0,n)
        {
            if(s[i]==s[0])
            {
                v.pub(i);
                cnt++;
            }
        }
        str=s.substr(0,1);
        ll j;
        for(ll i=1;i<n;i++)
        {
            //cout<<v[j]<<" ";
            maxcnt=0;
            for(j=0;j<cnt&&i+v[j]<n;j++)
            {
                maxcnt++;
                if(s[v[j]+i]!=s[i])
                {
                    //cout<<"1"<<" ";
                    cout<<str<<"\n";
                    goto lbl;
                }
                //cout<<str<<" ";
            }
            if(maxcnt!=cnt)
            {
                cout<<str<<"\n";
                goto lbl;
            }
            str=s.substr(0,i+1);
        }
        cout<<str<<"\n";
    }
}
