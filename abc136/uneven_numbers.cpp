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

  int res = 0;

  FOR(i, 1, n + 1) {
    if (i < 10) {
      res++;
    }
    if (100 <= i && i < 1000) {
      res++;
    }
    if (10000 <= i && i < 100000) {
      res++;
    }
  }

  cout << res << endl;

  return 0;
}
