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
int dp[21][21][21];

int query(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0) {
    return 1;
  }

  if (a > 20 || b > 20 || c > 20) {
    return dp[20][20][20];
  }

  return dp[a][b][c];
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  fill_n(&dp[0][0][0], 21 * 21 * 21, 0);

  for (int i = 0; i <= 20; ++i) {
    for (int j = 0; j <= 20; ++j) {
      dp[0][i][j] = 1;
      dp[i][0][j] = 1;
      dp[i][j][0] = 1;
    }
  }

  for (int i = 0; i <= 18; ++i) {
    for (int j = i + 1; j <= 19; ++j) {
      for (int k = j + 1; k <= 20; ++k) {
        dp[i][j][k] = dp[i][j][k - 1] + dp[i][j - 1][k - 1] - dp[i][j - 1][k];
      }
    }
  }

  for (int i = 1; i <= 20; ++i) {
    for (int j = 1; j <= 20; ++j) {
      for (int k = 1; k <= 20; ++k) {
        if (dp[i][j][k]) {
          continue;
        }

        dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - 1][k] + dp[i - 1][j][k - 1] -
                      dp[i - 1][j - 1][k - 1];
      }
    }
  }

  int a, b, c;
  while (true) {
    cin >> a >> b >> c;
    if (a == -1 && b == -1 && c == -1) {
      break;
    }
    cout << "w(" << a << ", " << b << ", " << c << ") = " << query(a, b, c) << endl;
  }

  return 0;
}
