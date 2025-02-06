#include <bits/stdc++.h>

using namespace std;

#ifdef ONLINE_JUDGE  // clang-format off
__unused constexpr bool IS_LOCAL = false;
#else
__unused constexpr bool IS_LOCAL = true;
#endif

#define debug if constexpr (IS_LOCAL) cout << "[DEBUG]" << ' '
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define bitcnt(x) __builtin_popcount(x)
#define endl '\n'  // clang-format on

__unused const auto MOD = 1000000007;
__unused const auto PI = 3.1415926535897932384626433832795;

typedef long long ll;
typedef unsigned long long ull;

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
