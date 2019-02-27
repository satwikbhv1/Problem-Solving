#include<bits/stdc++.h>
#define ll long long
#define fr(i,z,n) for(ll i=z;i<n;i++)
#define br(i,z,n) for(ll i=z;i>n;i--)
using namespace std;
void fast(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fast();
    ll n,cnt=0;
    cin>>n;
    char arr[n][n];
    fr(i,0,n)
    {
        fr(j,0,n)
        {
            cin>>arr[i][j];
        }
    }
    fr(i,0,n-2)
    {
        fr(j,0,n-2)
        {
            if(arr[i][j]=='X')
            {
                if(arr[i][j+2]=='X'&&arr[i+1][j+1]=='X'&&arr[i+2][j]=='X'&&arr[i+2][j+2]=='X')
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}
