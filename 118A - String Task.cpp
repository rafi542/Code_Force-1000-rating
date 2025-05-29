#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long  int  i, n, m, g, h, p, v, a, cnt=0, t, f, ans;
  string s;
  char c=' ';
  cin >> s;
  for(i=0; i<s.size(); i++)
  {
    if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y'){
       continue;
    }  
    else
    {
      g = s[i];
      if(g>=65 && g<=90)
        g += 32;
      c = g; 
      s[i] = c;
      cout << "." << s[i];
    }  
  }
}  
