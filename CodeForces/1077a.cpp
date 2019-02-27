#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            cout<<k/2*(a-b)<<"\n";
        }
        else
        {
            cout<<(k-1)/2*(a-b)+a<<"\n";
        }
    }
}
