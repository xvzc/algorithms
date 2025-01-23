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
vector<vector<int>> cells;
int white = 0, black = 0;
bool find(int y, int x, int len) {
  if (len == 1) {
    return cells[y][x] == 0;
  }

  int next_len = len / 2;

  int ul = find(y, x, next_len);
  int ur = find(y, x + next_len, next_len);
  int dl = find(y + next_len, x, next_len);
  int dr = find(y + next_len, x + next_len, next_len);

  if (ul && ur && dl && dr) {
    return true;
  }

  if (!ul && !ur && !dl && !dr) {
    return false;
  }

  white += ul;
  white += ur;
  white += dl;
  white += dr;
  black += !ul;
  black += !ur;
  black += !dl;
  black += !dr;

  return ul + ur + dl + dr;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;

  cells = vector<vector<int>>(n, vector<int>(n));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> cells[i][j];
    }
  }

  cout << find(0, 0, n) << endl;
  target = 1;
  cout << find(0, 0, n);

  // for (auto v : cells) {
  //   for (auto x : v) {
  //     cout << x << ' ';
  //   }
  //   cout << endl;
  // }

  return 0;
}
