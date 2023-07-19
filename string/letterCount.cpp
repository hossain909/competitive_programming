#include<bits/stdc++.h>
using namespace std;

int main()
{
	int small = 0, capital = 0;
	string s = "BangladesH";
	
	for (auto x : s) {
		if ((int)x >= 97 && (int)x <= 122) {
			small++;
		} else capital++;
	}
	cout << small << " " << capital << endl;
	return 0;
}