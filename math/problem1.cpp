// 1+2+3....+n;
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef std::vector<int> vInt;

int main()
{

	long long int sum = 0;
	int n = 2;
	for (int i = 1; i <= n; i++) {
		sum += pow(i, i);
	}
	cout << sum << endl;
	
	
	return 0;
}