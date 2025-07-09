#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;
int main() {
  char in[11], started = 0;
  cin >> in;
  int len = strlen(in);
  for (int i = 0; i < len / 2; ++i) {
    char temp = in[i];
    in[i] = in[len - 1 - i];
    in[len - 1 - i] = temp;
  }
  for (int i = 0; i < len; i++) {
    if (in[i] != '0' && started) {
      cout << in[i];
    } else if (in[i] != '0') {
      started = 1;
      cout << in[i];
    } else if (in[i] == '0' && started) {
      cout << in[i];
    }
  }
  if (!started)
    cout << "0";
  return 0;
}