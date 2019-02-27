#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t,a,b;
   cin>>t;
   if(t>1)
   {
       if(t%2==0)
       {
           cout<<t<<" "<<"2";
       }
       else
       {
           cout<<t-1<<" "<<"2";
       }
   }
   else
   {
       cout<<"-1";
   }
}
