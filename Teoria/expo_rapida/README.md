# Exponenciação rápida

$A^x MOD M$

O objetivo é calcular isso de uma forma rápida.

uma primeira abordagem seria
```c++
int res = 1;
int A, x;
cin >> A;
for (int i = 0; i < x; i++){
  res = (res * A) % M;
}
```
