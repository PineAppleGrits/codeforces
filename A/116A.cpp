#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int passangers = 0, max=0;
  for (int i = 0; i < n; i++){
    int in, out;
    if(passangers > max) max = passangers;
    cin >> out >> in;
    passangers+=in;
    passangers-=out;
  }
  cout << max;
}