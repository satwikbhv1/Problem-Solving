#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll arr[3];
    for(ll i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    arr[2]=arr[2]-arr[0]-arr[1];
    if(arr[2]>=0)
    {
        cout<<arr[2]+1<<"\n";
    }
    else
    {
        cout<<"0"<<"\n";
    }
}
