#include <bits/stdc++.h>

using namespace std;

int main(){
  size_t n, n_partial, sum_total, sum_partial;
  sum_partial = 0;
  cin >> n;
  sum_total = (1 + n)*n/2;
  for (size_t i = 0; i < n-1; i++){
    cin >> n_partial;
    sum_partial += n_partial;
  }
  cout << sum_total - sum_partial << "\n";
}