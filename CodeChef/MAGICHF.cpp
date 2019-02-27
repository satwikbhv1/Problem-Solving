#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	ll t,n,s,x,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>s;
	    while(s--)
	    {
	        cin>>a>>b;
	        if(a==x)
	        {
	            x=b;
	        }
	        else if(b==x)
	        {
	            x=a;
	        }
	    }
	    cout<<x<<"\n";
	}
	return 0;
}

