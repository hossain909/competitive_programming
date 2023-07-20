#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 8;
	int k = 3;
	
	//whith left shift
	// if (n & (1 << k)) cout << "Set";
	// else cout << "Unset";
	
	//whith right shift
	if ((n >> k) & 1) cout << "Set";
	else cout << "Unset";
	
	
	return 0;
}

// check if kth index bit set or not.
// if positon then use k-1




