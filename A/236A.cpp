#include <bits/stdc++.h>

using namespace std;

int main()
{
  string name;
  cin >> name;
  vector<char> chars;
  for (int i = 0; i < name.length(); i++)
  {
    
    if(find(chars.begin(),chars.end(),name[i]) != std::end(chars)){

    } else {
      chars.push_back(name[i]);
    }
  }
  
  if(chars.size() % 2 == 0){
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

}
