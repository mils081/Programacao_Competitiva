#include <bits/stdc++.h>

using namespace std;

int main(){
  int m, l1, l2, l3;
  while(cin >> m >> l1 >> l2 >> l3){
    cout << lcm(lcm(l1, l2), l3) - m << "\n";
  }
}
