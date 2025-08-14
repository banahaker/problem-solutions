#include <iostream>
using namespace std;

int main() {
  int a, b, n, x, nice_buyer = 0;
  cin >> a >> b >> n;
  for(int i=0; i<n; i++) {
    int c[103] = {0};
    while(cin >> x && x != 0) {
      if(x > 0) 
        c[x]++;
      else c[-x]--;
    }
    if(c[a] > 0 && c[b] > 0) nice_buyer++;
  }
  cout << nice_buyer << endl;
}
