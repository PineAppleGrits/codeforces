#include <bits/stdc++.h>

using namespace std;

int main(){
  int m,n;
  cin >> m >>n;
  int squares = m*n;
  int dominos = 0;
  while(squares >0){
    squares-=2;
    dominos++;
  }
  cout << dominos;
}
