#include <bits/stdc++.h>
#include <omp.h>>
using namespace std;


int main() {
	double startTime, endTime;
    int n;
	cin >> n;

	vector<  vector<int> > dp(n,vector<int>(3));

//	int dp[n][3];

    string s;
    cin >> s;
	//cout<<n<<" "<<s.length()<<endl;
	//startTime = omp_get_wtime();

    dp[0][0] = dp[0][1] = dp[0][2] = 1;

    for(int i=1;i<s.length();i++){
        dp[i][0] = dp[i-1][0] + (s[i]!=s[i-1]);
        dp[i][1] = max (dp[i-1][0] + (s[i]==s[i-1]) , dp[i-1][1] + (s[i]!=s[i-1]));
        dp[i][2] = max(dp[i-1][1] + (s[i]==s[i-1]) , dp[i-1][2] + (s[i]!=s[i-1]));
    }

	//endTime=omp_get_wtime();

    cout <<dp[n-1][2]<<endl;
    //cout<<fixed<<setprecision(100)<<endTime-startTime<<endl;
    return 0;
}
