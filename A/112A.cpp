#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string str1,str2;
  cin >> str1 >> str2;
  bool equal = true;
  int str_values[2] = {0,0};
  for(int i =0;i<str1.length(); i++){
    int char1 = tolower(str1[i]),char2 = tolower(str2[i]);
    if(char1 != char2) equal=false;
    str_values[0] += char1;
    str_values[1] += char2;
  }
/* 
If the first string is less than the second one, print "-1". 
If the second string is less than the first one, print "1". 
If the strings are equal, print "0".
*/
  if(str_values[0] < str_values[1]){
    cout << -1;
  } else if(str_values[0] > str_values[1]){
    cout << 1;
  } else if(equal){
    cout << 0;
  }
  cout << "String 1 value " << str_values[0] << endl;
  cout << "String 2 value " << str_values[1] << endl;
  cout << "Equal: " << equal << endl;
}
