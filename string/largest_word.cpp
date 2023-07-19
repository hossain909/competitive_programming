#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str = "I love Bangladesh";
  int len = str.length();
  int currLen = 0, maxLen = 0;
  int st = 0, maxSt = 0;
  
  for (int i = 0; i < len; i++) {
    if (str[i] != ' ') {
      currLen++;
      
    }
    else {
      maxLen = max(currLen, maxLen);
      currLen = 0;
      
    }
  }
  cout << max(currLen, maxLen) << endl;
  
  return 0;
}