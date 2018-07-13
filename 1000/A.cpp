#include <bits/stdc++.h>
using namespace std;

int main() {
  // 0 is M
  // 1 - 4 is S to XXXS
  // 5 - 8 is L to XXXL
  long tl1[9];
  long tl2[9];
  for (long base = 0; base < 9; base++) {
    tl1[base] = 0;
    tl2[base] = 0;
  }
  long n;
  cin >> n;
  for (long i = 0; i < n; i++) {
    string size;
    cin >> size;
    long len = size.length();
    long base = 0;
    switch (size[len - 1]) {
    case 'M':
      len = 1;
      break;
    case 'S':
      base = 1;
      break;
    case 'L':
      base = 5;
      break;
    }
    base += len - 1;
    tl1[base]++;
  }
  for (long i = 0; i < n; i++) {
    string size;
    cin >> size;
    long len = size.length();
    long base = 0;
    switch (size[len - 1]) {
    case 'M':
      len = 1;
      break;
    case 'S':
      base = 1;
      break;
    case 'L':
      base = 5;
      break;
    }
    base += len - 1;
    tl2[base]++;
  }
  //  cout << tl1[0];
  long seconds = 0;
  for (long base = 0; base < 9; base++) {
    //cout << tl1[base] << ' ' << tl2[base] << endl;
    if (tl1[base] > tl2[base]) {
      seconds += tl1[base] - tl2[base];
    }
  }
  cout << seconds << endl;
}
