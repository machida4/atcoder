#include <bits/stdc++.h>
#define FOR(i, a, b) for(ll i = (a); i < (b); ++i)
#define FORR(i, a, b) for(ll i = (a); i > (b); --i)
#define REP(i, n) for(ll i = 0; i < (n); ++i)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOREACH(x, a) for(auto &(x) : (a))
#define dump(x)  cout << #x << " = " << (x) << endl;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define SP << " " <<
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

#define int long long

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n;
  cin >> n;

  vector<int> A(n);

  REP(i, n) {
    cin >> A[i];
  }

  for (int i = 1; i < n; i++)
  {
    if (A[i - 1] > A[i]) {
      cout << "No" << endl;
      return 0;
    }

    if (A[i - 1] == A[i]) {
      continue;
    }

    A[i]--;
  }

  cout << "Yes" << endl;

  return 0;
}
