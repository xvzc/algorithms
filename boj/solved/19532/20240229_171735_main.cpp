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

struct func {
  int a;
  int b;
  int c;

  int assign(int x, int y) { return a * x + b * y + c; }
};

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  func fn = { a, b, -c };
  func gn = { d, e, -f };

  for (int i = -999; i < 1000; ++i) {
    for (int j = -999; j < 1000; ++j) {
      if (fn.assign(i, j) == 0 and gn.assign(i, j) == 0) {
        cout << i << ' ' << j;
        return 0;
      }
    }
  }

  return 0;
}
