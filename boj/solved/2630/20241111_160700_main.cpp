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

int total_white = 0;
int total_blue = 0;
void find(int y, int x, int len) {
  int white = false;
  int blue = false;
  for (int i = y; i < y + len; ++i) {
    for (int j = x; j < x + len; ++j) {
      if (cells[i][j] == 0) {
        white = true;
      } else {
        blue = true;
      }

      if (white && blue) {
        /*debug << y << ' ' << x << ' ' << len << endl;*/
        find(y, x, len / 2);
        find(y, x + len / 2, len / 2);
        find(y + len / 2, x, len / 2);
        find(y + len / 2, x + len / 2, len / 2);

        return;
      }
    }
  }

  if (white) {
    total_white++;
  }

  if (blue) {
    total_blue++;
  }
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

  find(0, 0, n);
  cout << total_white << endl;
  cout << total_blue << endl;

  return 0;
}

