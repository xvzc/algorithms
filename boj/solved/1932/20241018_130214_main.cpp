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

  vector<vector<int>> tree;
  for (int i = 0; i < n; ++i) {
    tree.push_back(vector<int>(i + 1));
    for (int j = 0; j <= i; ++j) {
      cin >> tree[i][j];
    }
  }

  for (int i = 1; i < tree.size(); ++i) {
    tree[i][0] += tree[i - 1][0];
    tree[i][i] += tree[i - 1][i - 1];
  }

  for (int i = 1; i < tree.size(); ++i) {
    for (int j = 1; j < tree[i].size() - 1; ++j) {
      tree[i][j] += max(tree[i - 1][j - 1], tree[i - 1][j]);
    }
  }

  cout << *max_element(all(tree.back())) << endl;

  return 0;
}
