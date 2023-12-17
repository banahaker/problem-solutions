#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  stringstream ss(s);
  int ans;
  ss >> ans;
  cout << ans << "\n";
  return 0;
}