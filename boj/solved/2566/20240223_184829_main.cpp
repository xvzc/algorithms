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

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  vector<vector<int>> v(10, vector<int>(10, 0));
  for (int i = 1; i < 10; ++i) {
    for (int j = 1; j < 10; ++j) {
      cin >> v[i][j];
    }
  }

  int max = -1e9;
  int row = 0, col = 0;
  for (int i = 1; i < 10; ++i) {
    for (int j = 1; j < 10; ++j) {
      if (v[i][j] > max) {
        row = i, col = j;
        max = v[i][j];
      }
    }
  }

  cout << max << endl;
  cout << row << ' ' << col;

  return 0;
}
