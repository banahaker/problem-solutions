#include <cmath>
#include <iostream>
#include <string>
#define endl '\n'
using namespace std;

int main() {
  int A = 0, B = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (!(i % 2)) {
      A += s[i] - '0';
    } else {
      B += s[i] - '0';
    }
  }
  cout << abs(A - B) << endl;
  return 0;
}