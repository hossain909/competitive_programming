#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		// 1. O(n) time & O(n) space complexity
		int odd_occuring_with_hashmap(vector<int> arr, int size) {
			unordered_map<int, int> elements;
			for (int i = 0; i < size; i++) {
				elements[arr[i]]++;
			}
			
			for (auto x : elements) {
				if (x.second % 2 != 0) {
					return x.first;
				}
			}
			return -1;
		};
		
		// 2. O(n) time & O(1) space complexity
		int odd_occuring_with_xor(vector<int> arr, int size) {
			int res = 0;
			for (int i = 0; i < size; i++) {
				res ^= arr[i];
			}
			return res;
		}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		
		Solution obj;
		int result = obj.odd_occuring_with_hashmap(v, n);
		cout << result << endl;
	}
	return 0;
}