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
  vector<int> points(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> points[i];
  }

  vector<int> dp(n + 1, 0);

  dp[1] = points[1];
  dp[2] = points[1] + points[2];
  dp[3] = max(points[1], points[2]) + points[3];
  dp[4] = points[1] + max(points[2], points[3]) + points[4];
  for (int i = 4; i <= n; ++i) {
    dp[i] = max(dp[i - 2], dp[i - 3] + points[i - 1]) + points[i];
  }

  cout << dp[n] << endl;

  return 0;
}
