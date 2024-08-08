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
bool shouldDraw(int i, int x) {
  int next = x / 3;
  if (next <= i and i < 2 * next) {
    return false;
  }

  if (x > i) {
    return shouldDraw(i, next);

  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n;
  while (cin >> n) {
    int x = 1;
    for (int i = 0; i < n; ++i) {
      x *= 3;
    }
    for (int i = 0; i < x; ++i) {
      if (shouldDraw(i, x)) {
        cout << '-';
      } else {
        cout << ' ';
      }
    }
    cout << endl;
  }

  return 0;
}
