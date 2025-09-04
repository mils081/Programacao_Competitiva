#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, v;
  cin >> n;
  vector<int> h(n);
  int dp[n];

  for (int i = 0; i < n; i++){
    cin >> h[i];
  }

  dp[0] = 0;

  for (int i = 1; i < n; i++){
    dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);

    if (i >= 2){
      dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[n - 1];
  
}
