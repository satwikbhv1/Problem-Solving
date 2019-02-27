#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	// your code goes here//rgb rbg brg bgr grb gbr
    ll n;
    cin>>n;
    char arr[n+1];
    arr[n]='p';
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    char a='B',b='R',c='G';
    ll cnt=0;
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1]&&arr[i]==a)
        {
            cnt++;
            if(arr[i+2]==b)
            {
                arr[i+1]=c;
            }
            else
            {
                arr[i+1]=b;
            }
        }
        else if(arr[i]==arr[i+1]&&arr[i]==b)
        {
            cnt++;
            if(arr[i+2]==a)
            {
                arr[i+1]=c;
            }
            else
            {
                arr[i+1]=a;
            }
        }
        else if(arr[i]==arr[i+1]&&arr[i]==c)
        {
            cnt++;
            if(arr[i+2]==b)
            {
                arr[i+1]=a;
            }
            else
            {
                arr[i+1]=b;
            }
        }
    }
    cout<<cnt<<"\n";
    for(ll i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
