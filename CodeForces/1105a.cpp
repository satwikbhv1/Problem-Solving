#include<bits/stdc++.h>
using namespace std;
int main()
{
   long n,cost=0,mincost,minind;
   cin>>n;
   long double arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int t=1;t<=100;t++)
   {
       cost=0;
       for(int j=0;j<n;j++)
       {
           if(t<arr[j])
           {
               cost+=arr[j]-t-1;
           }
           else if(t>arr[j])
           {
               cost+=t-arr[j]-1;
           }
       }
       if(cost<mincost||t==1)
       {
            mincost=cost;
            minind=t;
       }
   }
   cout<<minind<<" "<<mincost;
}
