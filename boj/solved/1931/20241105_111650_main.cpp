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
  auto it = cbegin(c);
  os << "{";
  while (it != cend(c)) os << *it++ && it != cend(c) && os << ", ";
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

  int n;
  cin >> n;

  vector<pair<int, int>> v(n);

  for (int i = 0; i < n; ++i) {
    cin >> v[i].fi >> v[i].se;
  }

  sort(all(v), compare);

  debug << v << endl;

  vector<pair<int,int>> schedule;
  schedule.push_back(v[0]);

  for (int i = 1; i < n; ++i) {
    if (schedule.back().se > v[i].fi) {
      continue;
    }

    schedule.push_back(v[i]);
  }

  debug << schedule << endl;

  cout << schedule.size() << endl;

  return 0;
}
