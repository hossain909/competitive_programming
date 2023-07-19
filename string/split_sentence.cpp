#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	
	istringstream iS(str);
	int cnt = 0;
	while (iS >> str) {
		// cout << str << endl;
		cnt++;
	}
	cout << cnt << endl;
	
	
	return 0;
}