#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  vector<long long> k;

  cin >> N;
  k.resize(N);
  for (int i = 0; i < N; i++){
    cin >> k[i];
  }
  if (N == 1){
    cout << k[0];
  }
  else {
    vector<long long> dp(N);
    dp[0] = k[0];
    dp[1] = max(k[0], k[1]);

    for (int i = 2; i < N; i++){
      dp[i] = max(k[i] + dp[i - 2], dp[i - 1]);
    }

    cout << dp[N-1];
  }
}
