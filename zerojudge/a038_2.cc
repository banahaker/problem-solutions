#include <iostream>
using namespace std;

int main() {
  int k, new_num = 0;
  cin >> k;
  while (k > 0) {
    new_num = new_num * 10 + k % 10;
    k /= 10;
  }
  cout << new_num;
  return 0;
}
