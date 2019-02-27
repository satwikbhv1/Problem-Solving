#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t,a,b;
   cin>>t;
   char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   while(t--)
   {
      cin>>a>>b;
      while(a>0)
      {
          int c =b;
          while(c--&&a>0)
          {
              cout<<arr[c];
              a--;
          }
      }
      cout<<"\n";
   }
}
