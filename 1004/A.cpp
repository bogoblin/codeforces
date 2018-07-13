#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  int h0, h1;
  int c = 2;
  cin >> n >> d;

  cin >> h0;
  for (int i = 1; i < n; i++) {
    cin >> h1;
    if (h1 - h0 > 2*d) {
      c += 2;
    } else if (h1 - h0 == 2*d) {
      c += 1;
    }
    h0 = h1;
  }
  cout << c;
}
