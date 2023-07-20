#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 0;
	int count = 0;
	
	// 1: naiv approach
	// while (n != 0) {
	// 	if ((n & 1) == 1) count++;
	// 	n = n >> 1;
	// }
	// cout << count << endl;
	
	
	// 2: brian carningham method
	while (n != 0) {
		n = n & (n - 1);
		count++;
	}
	cout << count << endl;
	
	
	return 0;
}