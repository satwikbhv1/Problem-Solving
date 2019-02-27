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
    ll n,k;
    cin>>n>>k;
    char arr[n];
    ll a[26]={0};
    ll cnt=0,max=0;
    fr(i,0,n)
    {
        cin>>arr[i];
    }
    fr(i,0,n)
    {
        if(k!=1)
        {
            if(i>0&&arr[i]==arr[i-1])
            {
                cnt++;
                if(cnt==1)
                {
                    cnt++;
                }
            }
            else if(arr[i]!=arr[i-1])
            {
                cnt=0;
            }
            if(cnt==k)
            {
                cnt=0;
                a[(int)arr[i]-97]++;
                i++;
            }
        }
        if(k==1)
        {
            a[(int)arr[i]-97]++;
        }
    }
    fr(i,0,26)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<max;
}
