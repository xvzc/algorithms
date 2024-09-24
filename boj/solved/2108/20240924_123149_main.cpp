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

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  sort(all(v));

  double avg = (double)accumulate(all(v), 0) / n;
  int sign = avg < 0 ? -1 : 1;

  int avg_ten = abs((int)(avg * 10));
  if (avg_ten % 10 < 5) {
    avg_ten -= (avg_ten % 10);
  } else {
    avg_ten += (10 - avg_ten % 10);
  }

  // cout << avg << endl;
  cout << sign * (int)avg_ten / 10 << endl;

  cout << v[n / 2] << endl;

  unordered_map<int, int> umap;
  for (auto x : v) {
    umap[x]++;
  }

  pair<int, int> mode = { -4001, 0 };
  for (auto p : umap) {
    if (mode.se <= p.se) {
      mode = p;
    }
  }

  vector<int> modes;
  for (auto p : umap) {
    if (p.se == mode.se) {
      modes.push_back(p.fi);
    }
  }

  sort(all(modes));
  if (modes.size() < 2) {
    modes.push_back(modes.back());
  }

  // debug << modes << endl;

  cout << modes[1] << endl;
  cout << v[n - 1] - v[0] << endl;

  return 0;
}
