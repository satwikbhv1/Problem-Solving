#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	// your code goes here//rgb rbg brg bgr grb gbr
    ll n;
    cin>>n;
    char arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll cnta=0,cntb=0,cntc=0,cntd=0,cnte=0,cntf=0,max;
    for(ll i=0;i<n;i++)
    {
        if(((i%3==0)&&arr[i]!='R')||((i%3==1)&&arr[i]!='G')||((i%3==2)&&arr[i]!='B'))
        {
            cnta++;
        }
        if(((i%3==0)&&arr[i]!='R')||((i%3==1)&&arr[i]!='B')||((i%3==2)&&arr[i]!='G'))
        {
            cntb++;
        }
        if(((i%3==0)&&arr[i]!='G')||((i%3==1)&&arr[i]!='R')||((i%3==2)&&arr[i]!='B'))
        {
            cntc++;
        }
        if(((i%3==0)&&arr[i]!='G')||((i%3==1)&&arr[i]!='B')||((i%3==2)&&arr[i]!='R'))
        {
            cntd++;
        }
        if(((i%3==0)&&arr[i]!='B')||((i%3==1)&&arr[i]!='G')||((i%3==2)&&arr[i]!='R'))
        {
            cnte++;
        }
        if(((i%3==0)&&arr[i]!='B')||((i%3==1)&&arr[i]!='R')||((i%3==2)&&arr[i]!='G'))
        {
            cntf++;
        }
    }
    max=cnta;
    if(max>cntb)
    {
        max=cntb;
    }
    if(max>cntc)
    {
        max=cntc;
    }
    if(max>cntd)
    {
        max=cntd;
    }
    if(max>cnte)
    {
        max=cnte;
    }
    if(max>cntf)
    {
        max=cntf;
    }
    cout<<max<<"\n";
    char a,b,c;
    if(max==cnta)
    {
        a='R';
        b='G';
        c='B';
    }
    if(max==cntb)
    {
        a='R';
        b='B';
        c='G';
    }
    if(max==cntc)
    {
        a='G';
        b='R';
        c='B';
    }
    if(max==cntd)
    {
        a='G';
        b='B';
        c='R';
    }
    if(max==cnte)
    {
        a='B';
        b='G';
        c='R';
    }
    if(max==cntf)
    {
        a='B';
        b='R';
        c='G';
    }
    for(ll i=0;i<n;i++)
    {
        if(i%3==0)
        {
            cout<<a;
        }
        if(i%3==1)
        {
            cout<<b;
        }
        if(i%3==2)
        {
            cout<<c;
        }
    }
}
