#include<bits/stdc++.h>
using namespace std;

int main()
{
  // check pallindrome
  int n;
  cin >> n;
  char arr[n + 1];
  cin >> arr;
  
  int i = 0;
  bool check = true;
  for (int i = 0; i < n; i++) {
    if (arr[i] != arr[n - 1 - i]) {
      check = false;
      break;
    }
  }
  if (check == true) cout << "YES" << endl;
  else cout << "NO" << endl;
  
  
  return 0;
}