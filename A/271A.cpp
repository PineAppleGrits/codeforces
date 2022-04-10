#include <bits/stdc++.h>

using namespace std;

int main(){
  string y;
  cin >> y;
  for (int i = 0; i < y.length(); i++){
    int digit = stoi((char)y[i]);
    cout << y[i] << " " <<2*digit << endl;
  
  }
}