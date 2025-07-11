#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  char cur;
  int quant = 0;
  int maior = 0;
  cin >> s;

  cur = s[0];
  for (auto v : s){
    if (cur != v){
      cur = v;
      quant = 1;
    } else {
      quant++;
      if (quant > maior){
        maior = quant;
      }
    }
  }

  cout << maior << "\n";
}
