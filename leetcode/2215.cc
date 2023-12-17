#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
	set<int> n1(nums1.begin(), nums1.end()), n2(nums2.begin(), nums2.end()), diff1, diff2;
	vector<int> re1, re2;
	vector<vector<int>> result;

	set_difference(n1.begin(), n1.end(), n2.begin(), n2.end(), inserter(diff1, diff1.begin()));
	for(auto i:diff1)
		re1.push_back(i);
	
	set_difference(n2.begin(), n2.end(), n1.begin(), n1.end(), inserter(diff2, diff2.begin()));
	for(auto i:diff2)
		re2.push_back(i);

	result.push_back(re1); result.push_back(re2);
  	
	return result;
}

int main() {
	int N, input;
	vector<int> in1, in2;
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> input;
		in1.push_back(input);
	}
	for(int i=0; i<N; i++) {
		cin >> input;
		in2.push_back(input);
	}
	vector<vector<int>> output = findDifference(in1, in2);
	for(auto i:output){
		for(auto j:i)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}
