#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string a,b,c,d,e,f;
    cin>>a;
    cin>>b>>c>>d>>e>>f;
    b=b+c;
    b=b+d;
    b=b+e;
    b=b+f;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(a[0]==b[2*i])
        {
            cout<<"YES\n";
            flag=1;
            break;
        }
        else if(a[1]==b[2*i+1])
        {
            cout<<"YES\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }
}
