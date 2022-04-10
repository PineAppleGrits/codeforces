#include <bits/stdc++.h>

using namespace std;

int main(){
  string str1,str2;
  cin >> str1 >> str2;
  if(str2 == string(str1.rbegin(),str1.rend())){
    cout << "YES";
  } else {
    cout << "NO";
  }
}