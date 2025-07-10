#include <cmath>
#include <iostream>
using namespace std;

bool checkArmstrong(int y) {
  int x = y;
  int result = 0;
  int digits = log10(x) + 1;
  while (x > 0) {
    result += pow(x % 10, digits);
    x /= 10;
  }
  return result == y;
}

int main() {
  int r1, r2, armstrongIsExist = 0;
  cin >> r1 >> r2;
  for (int i = r1; i <= r2; i++) {
    if (checkArmstrong(i)) {
      cout << i << " ";
      armstrongIsExist = 1;
    }
  }
  if (armstrongIsExist == 0) {
    cout << "none";
  }
  return 0;
}