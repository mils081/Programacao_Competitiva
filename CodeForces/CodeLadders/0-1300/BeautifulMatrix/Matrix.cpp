#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, posi, posj;
  int steps = 0;
  int vec[5][5];
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      cin >> vec[i][j];
      if (vec[i][j] == 1){
        posi = i;
        posj = j;
        break;
      }
    }
  }
  if (posi > 2){
    while (posi != 2){
      posi--;
      steps += 1;
    }
  } else {
    while (posi != 2){
      posi++;
      steps += 1;
    }
  }
  if (posj > 2){
    while (posj != 2){
      posj--;
      steps += 1;
    }
  } else {
    while (posj != 2){
      posj++;
      steps += 1;
    }
  }
  cout << steps;
}
