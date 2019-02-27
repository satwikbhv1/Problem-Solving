#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	// your code goes here
	
	string s;
	cin>>s;
	stack <char> s1;
	stack <char> s2;
	ll cnt=0;
	for(ll i=0;i<s.length();i++)
	{
	   // cout<<s[i];
	    s1.push(s[i]);
	   // cout<<s1.pop();
	}
	char d=s1.top();
	s1.pop();
	s2.push(d);
	while(!s1.empty())
	{
	    if(s2.empty()||s1.top()!=s2.top())
	    {
	        char y=s1.top();
	        s1.pop();
	        s2.push(y);
	    }
	    else
	    {
	        s1.pop();
	        s2.pop();
	        cnt++;
	    }
	}
	if(cnt%2==0)
	{
	    cout<<"No";
	}
	else
	{
	    cout<<"Yes";
	}
	return 0;
}
