#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(c == a){
    if(b > d){
      cout << "Yes";
    } else {
      cout << "No";
    }
  }
  else if(c < a){
    cout << "Yes";
  } else {
    cout << "No";
  }
}
