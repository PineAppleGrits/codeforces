#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, x =0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string next_move;
    cin >> next_move;
    if(next_move == "++X" || next_move == "X++"){
      x++;
    } else if(next_move == "--X" || next_move == "X--"){
      x--;
    }
  }
  
  cout << x;
}
