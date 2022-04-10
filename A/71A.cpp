#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++)
  {
    string tmp = s[i];

    if (tmp.length() > 10)
    {
      cout << tmp[0] << tmp.length() - 2 << tmp[tmp.length() - 1] << endl;
    }
    else
    {
      cout << tmp << endl;
    }
  }
}
