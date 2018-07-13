#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, M;
  long long a[100001];
  long long l[100001];
  cin >> n >> M;
  long long on = 1;
  a[0] = 0;
  l[0] = 0;
  for (long long i = 1; i <= n; i++) {
    cin >> a[i];
    l[i] = l[i-1] + (a[i] - a[i-1])*on;
    on = on?0:1;
  }
  long long total = l[n] + (M - a[n])*on;
  long long best  = total;
  on = 0;
  for (long long i = 0; i <= n; i++) {
    on = on?0:1;
    
    if ( (i != n && a[i] + 1 != a[i+1]) || (i != 0 && a[i] - 1 != a[i-1])) {
      long long after = total - l[i];
      long long timeafter = M - a[i];
      after = timeafter - after;
      if (on) after++;
      else after--;
      long long thistotal = l[i] + after;
      if (thistotal > best) {
        //cout << "prev best: " << best << endl;
        best = thistotal;
        //cout << "new best: " << best << endl;
      }
    }
    /*
    if (i != 0 && a[i] - 1 != a[i-1]) {
      long long after = total - l[i];
      long long timeafter = M - a[i];
      after = timeafter - after;
      if (on) after += 1;
      else    after -= 1;
      long long thistotal = l[i] + after;
      if (thistotal > best) {
        best = thistotal;
      }
    }
    */
  }
  cout << best << endl;
}
