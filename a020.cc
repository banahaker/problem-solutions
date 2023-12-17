#include <iostream>
#include <map>
#define endl '\n'
using namespace std;

map<char, int> location_list = {
    {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}, {'G', 16},
    {'H', 17}, {'I', 34}, {'J', 18}, {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22},
    {'O', 35}, {'P', 23}, {'Q', 24}, {'T', 27}, {'V', 29}, {'W', 32}, {'S', 26},
    {'U', 28}, {'X', 30}, {'Y', 31}, {'Z', 33}};

int main() {
  char n[11];
  int sum = 0;
  cin >> n;
  int loc = location_list[n[0]];
  sum += loc / 10 + (loc % 10) * 9;
  for (int i = 1; i < 9; i++) {
    sum += (n[i] - 48) * (8 - i + 1);
  }
  sum += (n[9] - 48);

  if (sum % 10 == 0) {
    cout << "real" << endl;
  } else {
    cout << "fake" << endl;
  }
  return 0;
}
