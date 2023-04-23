#include <bits/stdc++.h>
#define FOR(i, a, b) for(ll i = (a); i < (b); ++i)
#define FORR(i, a, b) for(ll i = (a); i > (b); --i)
#define REP(i, n) for(ll i = 0; i < (n); ++i)
#define REPR(i, n) for(ll i = n; i >= 0; i--)
#define FOREACH(x, a) for(auto &(x) : (a))
#define dump(x) cout << #x << " = " << (x) << endl;
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

  string s;
  cin >> s;

  vector<int> A;

  // run-length
  vector<int> Run;
  char cur = 'R';
  int count = 1;
  for(int i = 1; i < s.length(); i++) {
    if(s[i] == cur) {
      count++;
    } else {
      cur = s[i];
      Run.push_back(count);
      count = 1;
    }
  }
  Run.push_back(count);

  for(int i = 0; i < Run.size(); i += 2) {
    int r = Run[i];
    int l = Run[i + 1];

    REP(j, r - 1) { A.push_back(0); }
    if((r + l) % 2 != 0) {
      if(r % 2 == 0) {
        A.push_back((r + l) / 2);
        A.push_back((r + l) / 2 + 1);
      } else {
        A.push_back((r + l) / 2 + 1);
        A.push_back((r + l) / 2);
      }
    } else {
      A.push_back((r + l) / 2);
      A.push_back((r + l) / 2);
    }
    REP(j, l - 1) { A.push_back(0); }
  }

  REP(i, A.size()) {
    if(i == A.size() - 1) {
      cout << A[i];
      break;
    }
    cout << A[i] << " ";
  }

  return 0;
}
