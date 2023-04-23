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

bool compare_map(map<char, int> a, map<char, int> b) {
  for(pair<char, int> p : a) {
    if (b.find(p.first) == b.end()) {
      return false;
    }
    if (a[p.first] != b[p.first]) {
      return false;
    }
  }

  return true;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n;
  cin >> n;

  vector<string> S(n);
  REP(i, n) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    S[i] = s;
  }

  map<string, int> m;

  REP(i, n) {
    if (m.find(S[i]) != m.end()) {
      m[S[i]]++;
    } else {
      m[S[i]] = 1;
    }
  }

  int count = 0;
  for(pair<string, int> p: m) {
    if (p.second == 1) {
      continue;
    }
    count += (p.second * (p.second - 1)) / 2;
  }

  cout << count << endl;

  return 0;
}
