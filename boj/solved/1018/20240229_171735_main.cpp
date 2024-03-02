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

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

int count_changes(vector<string>& origin, vector<string>& method, int row, int col) {
  int ret = 0;

  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      if (method[i][j] != origin[row + i][col + j]) {
        ret++;
      }
    }
  }

  return ret;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  vector<string> method1 = {
    "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW",
    "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW",
  };

  vector<string> method2 = {
    "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB",
    "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB",
  };

  int N, M;
  cin >> N >> M;

  vector<string> origin(N);
  for (int i = 0; i < N; ++i) {
    cin >> origin[i];
  }

  int answer = 10000;
  for (int i = 0; i <= N - 8; ++i) {
    for (int j = 0; j <= M - 8; ++j) {
      int mini =
          min(count_changes(origin, method1, i, j), count_changes(origin, method2, i, j));
      answer = min(answer, mini);
    }
  }

  cout << answer;

  return 0;
}
