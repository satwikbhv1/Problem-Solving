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
    ll b[32]={1,2,3,5,6,7,10,11,14,15,21,22,30,33,35,42,55,66,70,77,105,110,154,165,210,231,330,385,462,770,1155,2310};
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        ll arr[n];
        map<ll,ll> m;
        fr(i,0,32)
        {
            m[b[i]]=0;
        }
        ll flag=0;
        fr(i,0,n)
        {
            cin>>s;
            arr[i]=1;
            fr(j,0,s.length())
            {
                if(s[j]=='a'&&arr[i]%2!=0)
                {
                    arr[i]*=2;
                }
                if(s[j]=='e'&&arr[i]%3!=0)
                {
                    arr[i]*=3;
                }
                if(s[j]=='i'&&arr[i]%5!=0)
                {
                    arr[i]*=5;
                }
                if(s[j]=='o'&&arr[i]%7!=0)
                {
                    arr[i]*=7;
                }
                if(s[j]=='u'&&arr[i]%11!=0)
                {
                    arr[i]*=11;
                }
            }
            m[arr[i]]++;
            //cout<<arr[i]<<" "<<m[arr[i]]<<"\n";
        }
        if(m[2310]>1)
        {
            flag=m[2310]/2;
        }
        
        ll cnt=0;
        fr(i,0,n)
        {
            ll g=2310/arr[i];
            fr(j,0,32)
            {
                
                cnt+=m[b[j]*g];
                //cout<<i<<" "<<b[j]<<" "<<b[j]*g<<"\n";
                 //cout<<cnt<<"\n";
            }
        }
        cnt=cnt/2;
        if(flag==0)
        {
            cout<<cnt<<"\n";
        }
        else
        {
            cout<<cnt-flag<<"\n";
        }
    }
}
