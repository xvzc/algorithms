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
  string s1, s2, temp;
  cin >> s1 >> s2;
  if (s1.length() <= s2.length()) {
    temp = s1;
    s1 = s2;
    s2 = temp;
  }

  int ans = -1e9;
  vector<vector<int>> lcs(s1.length() + 1, vector<int>(s2.length() + 1, 0));
  for (int i = 1; i < lcs.size(); ++i) {
    for (int j = 1; j < lcs[0].size(); ++j) {
      lcs[i][j] = s1[i - 1] == s2[j - 1] ? lcs[i - 1][j - 1] + 1
                                         : max(lcs[i - 1][j], lcs[i][j - 1]);
      ans = max(ans, lcs[i][j]);
    }
  }

  cout << ans << endl;

  return 0;
}
