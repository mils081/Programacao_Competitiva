#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, t;
  string s;
  cin >> n >> t >> s;
  while (t--){
    auto it1 = s.begin();
    auto it2 = s.begin() + 1;
    while (*it2 != *s.end()){
      if (*it1 == 'B' &&  *it2 == 'G'){
        swap(*it1, *it2);
        it1 += 2;
        it2 += 2;
      } else {
        it1++;
        it2++;
      }
    }
  }
  cout << s << "\n";
}
