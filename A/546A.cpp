#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int k,n,w;
  cin >> k >> n >> w;
  int bananaCosts = 0;
  for(int i = 0; i < w;i++){
    bananaCosts +=k*(i+1);
  }
  if(bananaCosts-n <= 0){
    cout << 0;
  } else {
  cout << bananaCosts -n;
  }
  
}
