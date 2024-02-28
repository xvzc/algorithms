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

template <class A, class B, class Container>
basic_ostream<A, B>& operator<<(basic_ostream<A, B>& os, Container const& c) {
  os << "{";
  auto it = c.begin();
  while (it != c.end()) os << *it++ && it != c.end() && os << ", ";
  return os << "}";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  vector<vector<int>> v(100, vector<int>(100, 0));

  int N;
  cin >> N;
  int x, y;
  for (int i = 0; i < N; ++i) {
    cin >> x >> y;
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        v[x + i][y + j] = 1;
      }
    }
  }

  int answer = 0;
  for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < 100; ++j) {
      if (v[i][j]) {
        answer++;
      }
    }
  }

  cout << answer;

  return 0;
}
