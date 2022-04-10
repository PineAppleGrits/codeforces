#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,times = 0;;
	string s;
	cin >> n;
	cin >> s;
	for(int i = 0; i<n;i++){
		if(s[i+1]== s[i]){
			times++;
		}
		
	}
	cout << times;
}