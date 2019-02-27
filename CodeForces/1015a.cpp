#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i = 1 ;i<=m;i++)
	{
        arr[i-1]=0;
	}
	int cnt=m;
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    for(int i = 1 ;i<=m;i++)
	    {
	        if(i>=a&&i<=b&&arr[i-1]!=1)
	        {
	            arr[i-1]=1;
	            cnt--;
	        }
	    }
	}
	cout<<cnt<<"\n";
	    for(int i = 0 ;i<m;i++)
	    {
	        if(arr[i]==0)
	        {
	            cout<<i+1<<" ";
	        }
	    }
	return 0;
}
