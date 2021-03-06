#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a[100000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  set<int> uniqueLeft, uniqueRight;
  int uR[100000];
  int uRsize = 0;
  for (int i = n-1; i >= 0; i--) {
    if (uniqueRight.find(a[i]) == uniqueRight.end()) {
      uniqueRight.insert(a[i]);
      uRsize++;
    }
    uR[i] = uRsize;
  }
  int uLsize = 0;
  long long pairs = 0;
  for (int i = 0; i < n-1; i++) {
    if (uniqueLeft.find(a[i]) == uniqueLeft.end()) {
      uniqueLeft.insert(a[i]);
      uLsize++;
      pairs += uR[i+1];
    }
  }
  cout << pairs;
}
