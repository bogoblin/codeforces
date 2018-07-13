#include <bits/stdc++.h>
using namespace std;

#define MAX 200001

int main() {
  long long n;
  long long c[MAX];
  vector<long long> in, out;
  cin >> n;
  for (long long i = 0; i < n; i++) {
    long long a, b;
    cin >> a >> b;
    in.push_back(a);
    out.push_back(b);
  }
  sort(in.begin(), in.end());
  sort(out.begin(), out.end());
  long long seg = 1;
  long long end = out.back();
  out.pop_back();
  while (in.size()) {
    if (out.size() == 0 || in.back() > out.back()) {
      c[seg] += end - in.back() + 1;
      end = in.back();
      in.pop_back();
      seg--;
    }
    else if (out.back() >= in.back()) {
      c[seg] += end - out.back() - 1;
      end = out.back();
      out.pop_back();
      seg++;
    }
  }
  for (long long i = 1; i <= n; i++ ){
    cout << c[i] << ' ';
  }
}
