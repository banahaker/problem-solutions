#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  if (n % k == 0) {
    cout << "YES" << endl;
    return 0;
  }
  while (n > 0) {
    if (n % 10 == k) {
      cout << "YES" << endl;
      return 0;
    }
    n /= 10;
  }
  cout << "NO" << endl;
  return 0;
}