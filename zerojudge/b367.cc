#include <iostream>
using namespace std;

int main() {
  int T, digits[130];
  cin >> T;
  while(T--){
    int n, m, keep = 0;
    cin >> n >> m;
    for(int i=0; i<n*m; i++) {
      cin >> digits[i];
    }
    for(int i=0; i<n*m; i++) {
      if (digits[i] != digits[n*m-i-1]){
        keep = 1;
        break;
      }
    }
    if(keep == 0) cout << "go forward" << endl;
    else cout << "keep defending" << endl;
  }
}

