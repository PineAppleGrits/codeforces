#include <bits/stdc++.h>

using namespace std;

int main()
{
  int one_x, one_y;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      int num;
      cin >> num;
      if (num == 1)
      {
        one_x = i;
        one_y = j;
      }
    }
  }
  cout << abs(one_x - 2) + abs(one_y - 2) << endl;
}
