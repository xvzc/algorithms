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

  vector<int> nums(n);
  vector<vector<int>> dp(2, vector<int>(n, 1));

  for (int i = 0; i < n; ++i) {
    cin >> nums[i];
  }

  for (int i = 1; i < n; ++i) {
    for (int j = i - 1; j >= 0; --j) {
      if (nums[j] >= nums[i]) {
        continue;
      }

      dp[0][i] = max(dp[0][i], dp[0][j] + 1);
    }
  }

  for (int i = n - 2; i >= 0; --i) {
    for (int j = i + 1; j < n; ++j) {
      if (nums[j] >= nums[i]) {
        continue;
      }

      dp[1][i] = max(dp[1][i], dp[1][j] + 1);
    }
  }

  int max_len = -1e9;
  for (int i = 0; i < n; ++i) {
    max_len = max(max_len, dp[0][i] + dp[1][i] - 1);
  }

  cout << max_len << endl;

  return 0;
}
