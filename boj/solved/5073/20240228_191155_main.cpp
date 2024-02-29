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

  int a, b, c;
  while (true) {
    cin >> a >> b >> c;
    if (a == 0 and b == 0 and c == 0) {
      break;
    }

    int max = std::max({ a, b, c });
    if (max >= ((a + b + c) - max)) {
      cout << "Invalid" << endl;
      continue;
    }

    if (a == b and b == c and a == c) {
      cout << "Equilateral" << endl;
      continue;
    }

    if (a == b or b == c or a == c) {
      cout << "Isosceles" << endl;
      continue;
    }

    cout << "Scalene" << endl;
  }

  return 0;
}
