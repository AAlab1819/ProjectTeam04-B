#include <bits/stdc++.h>
#include <omp.h>
using namespace std;

int main(){
	double startTime, endTime;

	int N, res = 1;
	string S;

  	cin >> N >> S;
	
  	//cout<<N<<" "<<S.length()<<endl;
  	//startTime = omp_get_wtime();
	
  	for(int i = 1; i < N; i++){
  	  res += (S[i] != S[i - 1]);
 	 }
	
    //endTime=omp_get_wtime();
 	 cout << min(res + 2, N) /*<< '\n'*/;
 	 //cout<<fixed<<setprecision(100)<<endTime-startTime<<endl;
}
