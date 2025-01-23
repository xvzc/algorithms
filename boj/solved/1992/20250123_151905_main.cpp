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

vector<string> image;

string compress(int y, int x, int size) {
  int black = 0;
  int white = 0;
  for (int i = y; i < y + size; ++i) {
    for (int j = x; j < x + size; ++j) {
      if (image[i][j] == '1') {
        black++;
      } else {
        white++;
      }
    }
  }

  if (black == 0) {
    return "0";
  }

  if (white == 0) {
    return "1";
  }

  int next_size = size / 2;
  string ul = compress(y, x, next_size);
  string ur = compress(y, x + next_size, next_size);
  string dl = compress(y + next_size, x, next_size);
  string dr = compress(y + next_size, x + next_size, next_size);

  return "(" + ul + ur + dl + dr + ")";
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n;
  cin >> n;

  image = vector<string>(n);
  for (int i = 0; i < n; ++i) {
    cin >> image[i];
  }

  cout << compress(0, 0, n) << endl;

  return 0;
}
