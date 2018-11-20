#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N, res = 1;
	string S;

  	cin >> N >> S;
  
  	for(int i = 1; i < N; i++){
  	  res += (S[i] != S[i - 1]);
 	 }
  
 	 cout << min(res + 2, N) << '\n';
}
