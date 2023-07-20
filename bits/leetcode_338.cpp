#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 7;
	int count = 0;
	vector<int> v;
	
	for (int i = 1; i <= n ; i++) {
		while (i != 0) {
			i = i & (i - 1);
			count++;
			cout << count << "";
		}
	}
	cout << count << "";
	
	
	// // print the array
	// for (auto x : v) {
	// 	cout << x << " ";
	// }
	return 0;
}