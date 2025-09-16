#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    int r, s[550];
    cin >> r;
    for(int i=0; i<r; i++) {
      cin >> s[i];
    }
    sort(s, s+r);
    int mid = r%2 == 0 ?  (s[r/2] + s[r/2-1])/2 : s[r/2];
    int sum = 0;
    for (int i=0; i<r; i++) {
      sum += abs(s[i] - mid);
    }
    cout << sum << endl;
  }
}
