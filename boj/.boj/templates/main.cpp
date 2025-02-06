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
#define bitcnt(x) __builtin_popcount(x)

__unused const auto MOD = 1000000007;
__unused const auto PI = 3.1415926535897932384626433832795;

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

template <typename X, typename Y>
ostream& operator<<(ostream& os, const pair<X, Y>& p) {
  return os << "(" << p.first << ", " << p.second << ")";
}

template <class C, class T, class S>
basic_ostream<C, T>& operator<<(basic_ostream<C, T>& os, S const& c) {
  os << "[";
  auto it = cbegin(c);
  while (it != cend(c)) os << *it++ && it != cend(c) && os << ", ";
  return os << "]";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  return 0;
}
