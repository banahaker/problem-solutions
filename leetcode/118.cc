#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
	if(numRows == 1) return {{1}};
	vector<int> prev{1, 1}, cur;
	vector<vector<int>> ans{{1}, {1, 1}};
	for(int t=3; t<=numRows; t++){
		cur.clear();
		cur.push_back(1);
		for(int i=1; i<t-1; i++)
			cur.push_back(prev[i] + prev[i-1]);
		cur.push_back(1);
		ans.push_back(cur);
		prev = cur;
	}
	return ans;
}

int main() {
	int in;
	cin >> in;
	vector<vector<int>> res = generate(in);
	for(auto i:res){
		for(int j:i)
			cout << j << " ";
		cout << endl;
	}
	return 0;
}
