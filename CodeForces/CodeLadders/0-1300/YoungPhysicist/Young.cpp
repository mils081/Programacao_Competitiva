#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<int> x, y, z;
  while(n--){
    int a, b, c;
    cin >> a >> b >> c;
    x.push_back(a);
    y.push_back(b);
    z.push_back(c);

  }

  int sum_x = accumulate(x.begin(), x.end(), 0);
  int sum_y = accumulate(y.begin(), y.end(), 0);
  int sum_z = accumulate(z.begin(), z.end(), 0);
  if (sum_x == 0 && sum_y == 0 && sum_z == 0){
    cout << "YES";
  } else {
    cout << "NO";
  }
}
