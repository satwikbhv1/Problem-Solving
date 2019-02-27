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
    ll n;
    cin>>n;
    string arr[n],crr[6]={"red","purple","yellow","orange","green","blue"},drr[6]={"Reality","Power","Mind","Soul","Time","Space"};
    ll brr[6];
    fr(i,0,6)
    {
        brr[i]=0;
    }
    fr(i,0,n)
    {
        cin>>arr[i];
        fr(j,0,6)
        {
            if(arr[i]==crr[j])
            {
                brr[j]=1;
            }
        }
    }
    cout<<6-n<<"\n";
    fr(i,0,6)
    {
        if(brr[i]==0)
        {
            cout<<drr[i]<<"\n";
        }
    }
}
