#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
#define int long long
using namespace std;

void solve();

// object type of point
struct point {
  int x, y, z;
  bool nextTo(point p2, int r) {
    double distance = pow(x - p2.x, 2) + pow(y - p2.y, 2) + pow(z - p2.z, 2);
    return distance <= 4*r*r;
  }
};

// impl of disjoint set
class disJointSet {
  public:
    vector<int> pa, rank, size;
    disJointSet(int n) {
      pa.resize(n);
      iota(pa.begin(), pa.end(), 0); 
      rank.assign(n, 0);
      size.assign(n, 1);
    }

    int find(int x){
      return pa[x] == x ? x : (pa[x] = find(pa[x]));
    }

    void merge(int x, int y) {
      int paX = find(x), paY = find(y); 
      if(rank[paX] <= rank[paY]) 
        pa[paX] = paY;
      else
        pa[paY] = paX;
      if(rank[paX] == rank[paY] && paX != paY)
        rank[paY]++;
    }
};

signed main() {
  int T;
  cin >> T;
  while(T--) {
    solve();
  }
  return 0;
}

void solve() {
  int n, h, r, x, y, z;
  cin >> n >> h >> r;
  disJointSet djs(1005); // pa[n] as bottom, pa[n+1] as top of cheese.
  vector<point> pts;
  // input the points
  for (int i=0; i<n; i++) {
    cin >> x >> y >> z;
    pts.push_back(point{x, y, z});
  }

  // Merge point to top/bottom if it is nearby top/bottom
  for(int i=0; i<n; i++) {
    if(pts[i].z <= r){
      djs.merge(i, 1001);
    } 
    else if(pts[i].z+r >= h) {
      djs.merge(i, 1002);
    }
  }
  // Merge the points nearby 
  for(int i=0; i<n; i++) {
    for(int j=1; j<n; j++) {
      if(pts[i].nextTo(pts[j], r)) {
        djs.merge(i, j);
      }
    }
  }


  if(djs.find(1001) == djs.find(1002)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
