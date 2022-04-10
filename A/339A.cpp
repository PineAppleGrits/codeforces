#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  sort(s.begin(),s.end());
  s.erase(remove(s.begin(), s.end(), '+'), s.end());
  for(int i = 0; i< s.length();i++) {
    cout << s[i] << (s[i+1]?"+":"");
  }
}