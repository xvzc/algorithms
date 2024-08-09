#include <bits/stdc++.h>

#ifdef LOCAL
#define IF_LOCAL if constexpr (true)
#else
#define IF_LOCAL if constexpr (false)
#endif

#define debug IF_LOCAL std::cout << "[DEBUG]" << ' '
#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

template <typename X, typename Y>
ostream& operator<<(ostream& os, const pair<X, Y>& p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <class C, class T, class Container>
basic_ostream<C, T>& operator<<(basic_ostream<C, T>& os, Container const& c) {
  auto it = c.begin();
  os << "{";
  while (it != c.end()) os << *it++ && it != c.end() && os << ", ";
  return os << "}";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */
int check(string s) {
  int score = 0;
  int cnt = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'X') {
      cnt = 0;
      continue;
    }

    score += ++cnt;
  }
  return score;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int T;
  cin >> T;
  string s;
  while (T--) {
    cin >> s;
    cout << check(s) << endl;
  }

  return 0;
}
