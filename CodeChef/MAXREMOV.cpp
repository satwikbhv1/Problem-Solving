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
    ll arr[100001],brr[100001],crr[100001],drr[100001];
    ll t;
    cin>>t;
    while(t--)
    {
        ll max=0;
        fr(i,1,100002)
        {
            arr[i]=0;
            brr[i]=0;
            crr[i]=0;
            drr[i]=0;
        }
        ll n,k;
        cin>>n>>k;
        ll l[n],r[n];
        fr(i,0,n)
        {
            cin>>l[i]>>r[i];
            if(r[i]>max)
            {
                max=r[i];
            }
            brr[l[i]]++;
            brr[r[i]+1]--;
        }
        fr(i,1,max+1)
        {
            arr[i]=brr[i]+arr[i-1];
        }
        ll cnt=0,maxcnt=0,cnt2=0;
        // fr(i,1,max+1)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<"\n";
        fr(i,1,max+1)
        {
            if(arr[i]==k)
            {
                cnt++;
            }
            else if(arr[i]==k+1)
            {
                cnt2++;
            }
            crr[i]=cnt;
            drr[i]=cnt2;
            //cout<<crr[i]<<" "<<drr[i]<<"\n";
        }
        //cout<<cnt<<"\n";
        ll count;
        fr(i,0,n)
        {
            count=cnt+crr[l[i]-1]-crr[r[i]]-drr[l[i]-1]+drr[r[i]];
            //cout<<count<<" ";
            if(count>maxcnt)
            {
                maxcnt=count;
            }
        }
        cout<<maxcnt<<"\n";
    }
}
