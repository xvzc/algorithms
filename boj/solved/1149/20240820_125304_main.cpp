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
  vector<vector<int>> v(3, vector<int>(n + 1, 0));
  for (int i = 1; i <= n; ++i) {
    cin >> v[0][i];
    cin >> v[1][i];
    cin >> v[2][i];
  }

  vector<vector<int>> dp(3, vector<int>(n + 1, 0));
  dp[0][1] = v[0][1];
  dp[1][1] = v[1][1];
  dp[2][1] = v[2][1];

  for (int i = 2; i <= n; ++i) {
    dp[0][i] = v[0][i] + min(dp[1][i - 1], dp[2][i - 1]);
    dp[1][i] = v[1][i] + min(dp[0][i - 1], dp[2][i - 1]);
    dp[2][i] = v[2][i] + min(dp[0][i - 1], dp[1][i - 1]);
  }

  cout << min({ dp[0][n], dp[1][n], dp[2][n] });

  return 0;
}
