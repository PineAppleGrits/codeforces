#include <bits/stdc++.h>

using namespace std;

int main(){
  string n;
  cin >> n;
  int lucky_numbers = 0;
  for (int i = 0; i < n.length(); i++){
    if(n[i] == '7' || n[i] == '4'){
      lucky_numbers++;
    }
  }
  if(lucky_numbers == 7 || lucky_numbers == 4) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  
}