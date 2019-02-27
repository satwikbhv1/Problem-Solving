#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll len;
        cin>>len;
        string a;
        cin>>a;
        for(ll i=0;i<len-1;i=i+2)
        {
            char temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        for(ll i=0;i<len;i++)
        {
            a[i]=(char)((int)(219-a[i]));
        }
        cout<<a<<"\n";
    }
    return 0;
}
