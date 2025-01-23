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

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> dp(n, vector<int>(m + 1, 0));
  vector<pair<int, int>> items(n);
  for (int i = 0; i < n; ++i) {
    cin >> items[i].fi >> items[i].se;
  }

  for (int i = 0; i <= m; ++i) {
    if (items[0].fi <= i) {
      dp[0][i] = items[0].se;
    }
  }

  for (int i = 1; i < items.size(); ++i) {
    for (int j = 0; j <= m; ++j) {
      if ((j - items[i].fi) < 0) {
        dp[i][j] = dp[i - 1][j];
        continue;
      }

      dp[i][j] = max(dp[i - 1][j - items[i].fi] + items[i].se, dp[i - 1][j]);
    }
  }

  cout << dp[items.size() - 1][m];

  return 0;
}
