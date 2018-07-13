#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a[10];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < 1 << n; i++) {
    int c[10]; // 1 if grigory has packet
    long long grigory = 0;
    int k = 0;
    long long andrew = 0;
    for (int j = 0; j < n; j++) {
      c[j] = i & 1 << j;
      if (c[j]) {
        grigory += a[i];
        k++;
      }
      else andrew += a[i];
    }
    if (grigory == 0) continue;
    if (andrew == 0) continue;
    if (grigory == andrew) continue;
    cout << k << endl;
    for (int j = 0; j < n; j++) {
      if (c[j]) cout << (j+1) << ' ';
    }
    return 0;
  }
  cout << "-1";
  return 0;
}
    
    
    
