#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	// your code goes here
	
	int q;
	cin>>q;
	ll a,b,c,d;
	while(q--)
	{
	    cin>>a>>b>>c>>d;
	    if(a<=c)
	    {
	        cout<<a<<" "<<d<<"\n";
	    }
	    else
	    {
	        cout<<b<<" "<<c<<"\n";
	    }
	}
}
