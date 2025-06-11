#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, n, x, g, i, f, j=0, cn;
  string s, c;
  c = "hello";
  cin >> s;
  for(i=0; i<s.size(); i++)
  {
    if(s[i] == c[j])
       j++;
  }
  if(j == c.size())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;  
}  
