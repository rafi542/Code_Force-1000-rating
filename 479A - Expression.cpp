#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a, b, t, i, j, k, g, cnt, c, h;
  vector<long long int>v;
  cin >> a >> b >> c;
  g = max((a+(b*c)),(a*(b+c)));
  k = max((a*b*c),((a+b)*c));
  h = max(g,k);
  cout << max(h,(a+b+c)) << endl;
}
    
