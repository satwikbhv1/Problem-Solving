#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   string s;
   cin>>s;
   for(int i=0,j=1;i<=t;j++,i=i+j)
   {
       cout<<s[i];
   }
}
