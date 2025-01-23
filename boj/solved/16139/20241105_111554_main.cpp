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
  string s;
  int q, from, to;
  char c;
  cin >> s >> q;

  vector<vector<int>> pre_sums(26, vector<int>(s.length() + 1, 0));
  for (int i = 0; i < pre_sums.size(); ++i) {
    for (int j = 1; j < pre_sums[0].size(); ++j) {
      char cur_char = i + 'a';
      pre_sums[i][j] += pre_sums[i][j - 1];
      if (cur_char == s[j - 1]) {
        pre_sums[i][j]++;
      }
    }
  }

  while (q--) {
    cin >> c >> from >> to;
    cout << pre_sums[c - 'a'][to + 1] - pre_sums[c - 'a'][from] << endl;
  }

  return 0;
}
