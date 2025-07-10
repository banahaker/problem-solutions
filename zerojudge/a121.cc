#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int x) {
  if (x < 2)
    return false;
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int l, r;
  while (cin >> l >> r) {
    int sum = 0;
    for (int i = l; i <= r; i++) {
      if (isPrime(i)) {
        sum++;
      }
    }
    cout << sum << endl;
  }

  return 0;
}