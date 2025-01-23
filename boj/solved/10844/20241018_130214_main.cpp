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

  vector<vector<int>> dp(101, vector<int>(10));
  int n;
  cin >> n;

  for (int i = 0; i <= 9; ++i) {
    dp[0][i] = 0;
    dp[1][i] = 1;
  }

  for (int i = 2; i <= 100; ++i) {
    for (int j = 0; j <= 9; ++j) {
      if (j == 0) {
        dp[i][j] = dp[i - 1][1];
        continue;
      }

      if (j == 9) {
        dp[i][j] = dp[i - 1][8];
        continue;
      }

      dp[i][j] =
          (dp[i - 1][j - 1] % 1000000000 + dp[i - 1][j + 1] % 1000000000) % 1000000000;
    }
  }

  ll sum = 0;
  for (int i = 1; i <= 9; ++i) {
    sum = (sum % 1000000000 + dp[n][i] % 1000000000) % 1000000000;
  }
  cout << sum << endl;

  return 0;
}
