#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int upper = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (isupper(s[i]))
    {
      upper++;
    }
  }
  for (int i = 0; i < s.length(); i++)
  {
    if (upper > s.length() -upper)
      s[i] = toupper(s[i]);
    else
      s[i] = tolower(s[i]);
  }
  cout << s;
}
