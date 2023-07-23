#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void countBits(int n) {
			vector<int> ans;
			
			for (int i = 0; i <= n; i++) {
				int count = 0;
				
				while (i != 0) {
					i = i & (i - 1);
					count++;
				}
				ans.push_back(count);
			}
			
			for (auto x : ans) {
				cout << x << " ";
			}
		}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		Solution obj;
		obj.countBits(n);
		
	}
	return 0;
}
