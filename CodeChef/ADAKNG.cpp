#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	int r,c,k,rno=1,cno=1;
	cin>>t;
	while(t--)
	{
	    cin>>r>>c>>k;
	    rno=1,cno=1;
	    if(r-k>=1)
	    {
	        rno+=k;
	    }
	    else
	    {
	        rno+=r-1;
	    }
	    if(r+k<=8)
	    {
	        rno+=k;
	    }
	    else
	    {
	        rno+=8-r;
	    }
	    if(c-k>=1)
	    {
	        cno+=k;
	    }
	    else
	    {
	        cno+=c-1;
	    }
	    if(c+k<=8)
	    {
	        cno+=k;
	    }
	    else
	    {
	        cno+=8-c;
	    }
	    cout<<rno*cno<<"\n";
	}
	return 0;
}

