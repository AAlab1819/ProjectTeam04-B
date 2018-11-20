#include <bits/stdc++.h>
using namespace std;


int main() {
 
    int n; 
	cin >> n;
	
	int dp[n][3];
	
    string s;
    cin >> s;

    dp[0][0] = dp[0][1] = dp[0][2] = 1;
    
    for(int i=1;i<s.length();i++){
        dp[i][0] = dp[i-1][0] + (s[i]!=s[i-1]);
        dp[i][1] = max (dp[i-1][0] + (s[i]==s[i-1]) , dp[i-1][1] + (s[i]!=s[i-1]));
        dp[i][2] = max(dp[i-1][1] + (s[i]==s[i-1]) , dp[i-1][2] + (s[i]!=s[i-1]));
    }
    
    cout << max (max (dp[n-1][0],dp[n-1][1]),dp[n-1][2]);
    return 0;
}
