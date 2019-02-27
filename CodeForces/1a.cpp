#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
  long int n,m,a;
  cin >> n >> m >> a;
  long long int result=ceil((long double)n/(long double)a)*ceil((long double)m/(long double)a);
  cout << result;
}
