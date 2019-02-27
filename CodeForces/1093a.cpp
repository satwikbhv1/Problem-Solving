#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t,a,b;
   cin>>t;
   while(t--)
   {
      cin>>a;
      b=a/7;
      if(a%7==0)
      {
          cout<<b<<"\n";
      }
      else
      {
          cout<<b+1<<"\n";
      }
   }
}
