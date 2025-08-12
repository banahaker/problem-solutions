#include <iostream>
using namespace std;

int main() {
  int n, k, scores[55];
  cin >> n >> k;
  for(int i=1; i<=n; i++) {
    cin >> scores[i];
  }
  if (scores[k] == 0) {
    int found = 0;
    for(int i=k; i>0; i--){
      if(scores[i] != 0) {
        found = 1;
        cout << i << endl;
        break;
      }
    }
    if (!found) cout <<  0 << endl;
  } else {
    int bonus = 0;
    for(int i=k+1; i<=n; i++) {
      if(scores[i] == scores[k]) bonus++;
      else break;
    }
    cout << k + bonus << endl;
  }

  return 0;
}
