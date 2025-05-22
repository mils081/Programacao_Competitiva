#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, k, a;
  int ans = 1;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int digits = 1;
    cin >> a;
    ans *= a;
    int temp = ans;
    while(temp >= 10){
      temp = temp /10;
      digits += 1;
    }
    if (digits > k){
      ans = 1;
    }
  }
  cout << ans;
}



