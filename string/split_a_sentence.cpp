#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int cnt = 0;
	
	// string word = "";
	// for (auto x : str) {
	// 	if (x == ' ') {
	// 		cout << word << endl;
	// 		word = "";
	// 	}
	// 	else {
	// 		word += x;
	// 	}
	// }
	// cout << cnt << endl;
	
	for (auto x : str) {
		if (x == ' ') cout << endl;
		else cout << x;
	}
	cout << endl;
	
	
	return 0;
}

