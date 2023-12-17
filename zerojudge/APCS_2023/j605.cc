#include <iostream>
#define endl '\n'
using namespace std;

// O(k)

struct Score {
  int time, score;
};

int main() {
  int k, fuck_times = 0;
  cin >> k;
  Score temp, Hightest = {0, -2};
  for (int i = 0; i < k; i++) {
    cin >> temp.time >> temp.score;
    if (temp.score == -1)
      fuck_times++;
    if (temp.score > Hightest.score)
      Hightest = temp;
  }
  cout << max(0, (Hightest.score - k - fuck_times * 2)) << " " << Hightest.time;
  return 0;
}
