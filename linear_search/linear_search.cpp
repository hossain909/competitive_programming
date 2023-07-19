#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int size, int target) {
  for(int i = 0; i < size; i++) {
    if(arr[i] == target) return arr[i];
  }
  return -1;
}
int main() {

  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target = 140;

  int result = linear_search(arr, size, target);

  cout << result << endl;
  

  return 0;
}