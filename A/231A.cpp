#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, problems = 0;
  cin >> n;
  for(int i = 0;i<n;i++){
    int tmp[3];
    cin >> tmp[0] >> tmp[1]>> tmp[2];
    if(tmp[1]&&tmp[2] || tmp[0]&&tmp[2] || tmp[0]&&tmp[1]){
      problems++;
    }
  }
  cout << problems;
}
