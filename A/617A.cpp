#include <bits/stdc++.h>

using namespace std;

int main()
{
  int x;
  cin >> x;
  int step = 0;
  for (int i = 5; i > 0; i--)
  {
    while(x-i >= 0 && x != 0){
      step++;
      x-=i;
    }
  }
  cout << step;
}