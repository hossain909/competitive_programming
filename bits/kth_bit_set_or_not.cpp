#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 8;
	int k = 3;
	
	if (n & (1 << k)) cout << "Set";
	else cout << "Unset";
	
	return 0;
}