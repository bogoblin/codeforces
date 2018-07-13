#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int crap;
    cin >> crap;
  }
  for (int i = 0; i < n; i++) {
    char o = i%2 + '0';
    cout << o;
  }
}
