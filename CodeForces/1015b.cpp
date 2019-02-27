#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string a,c;
	string b,d;
	cin>>a>>b;
	c = a;
    d = b;
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if(d.compare(c)!=0)
	{
	    cout<<"-1";
	    return 0;
	}
	//cout<<a<<" "<<b;
	if(a.compare(b)==0)
	{
	    cout<<"0";
	    return 0;
	}
	int counter = n-1;
	int var=0;
	int arr[10000];
	int ch;
	for(int i =0;i<n-1;i++)
	{
	    ch=0;
	    for(int j = 0;j<counter;j++)
	    {
			if(b[counter]==a[counter])
	        {
	           
	            continue;
	        }
	        if(b[counter]==a[j])
	        {
	            ch=1;
	        }
	        if(ch==1)
	        {
	            char temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	            arr[var]=j+1;
	            
	            var++;
	       }
	   }
	   
	   counter--;
	}
	
	cout<<var<<"\n";
	for(int i = 0;i<var;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}
