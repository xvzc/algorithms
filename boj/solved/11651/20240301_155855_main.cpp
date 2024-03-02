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

bool compare(pair<int, int> p1, pair<int, int> p2) {
  if (p1.se == p2.se) {
    return p1.fi < p2.fi;
  }

  return p1.se < p2.se;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int N;
  cin >> N;

  int a, b;
  vector<pair<int, int>> v;
  for (int i = 0; i < N; ++i) {
    cin >> a >> b;
    v.push_back({ a, b });
  }

  sort(all(v), compare);
  for (auto p : v) {
    cout << p.fi << ' ' << p.se << endl;
  }

  return 0;
}

