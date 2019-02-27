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
    ll n,k=0,max=0,maxcnt=0,flag=0;
    cin>>n;
    ll arr[n],brr[n];
    fr(i,0,n)
    {
        cin>>arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    fr(i,0,n)
    {
        if(arr[i]==max)
        {
            flag=1;
            k++;
        }
        else if(flag==1)
        {
            if(k>maxcnt)
            {
                maxcnt=k;
            }
            k=0;
            flag=0;
        }
    }
    if(flag==1)
    {
        if(k>maxcnt)
        {
            maxcnt=k;
        }
        k=0;
        flag=0;
    }
    cout<<maxcnt;
}
