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

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int N, M;
  cin >> N >> M;

  vector<int> v(M, 0);
  for (int i = 0; i < N; ++i) {
    cin >> v[i];
  }

  int max = -1e9;
  for (int i = 0; i < N - 2; ++i) {
    for (int j = i + 1; j < N - 1; ++j) {
      for (int k = j + 1; k < N; ++k) {
        int sum = v[i] + v[j] + v[k];
        if (sum <= M && max <= sum) {
          max = sum;
        }
      }
    }
  }

  cout << max;

  return 0;
}
