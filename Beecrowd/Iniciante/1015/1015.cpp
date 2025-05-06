#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  cout << fixed << setprecision(4) << dis << "\n";
}
