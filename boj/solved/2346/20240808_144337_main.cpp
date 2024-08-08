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

  int N, temp;
  cin >> N;
  deque<pair<int, int>> dq;

  for (int i = 1; i <= N; ++i) {
    cin >> temp;
    dq.push_back({ temp, i });
  }

  while (!dq.empty()) {
    pair<int, int> cur = dq.front();
    cout << cur.se << ' ';
    dq.pop_front();

    if (cur.fi > 0) {
      for (int i = 0; i < cur.fi - 1; ++i) {
        dq.push_back(dq.front());
        dq.pop_front();
      }
    } else {
      for (int i = 0; i < abs(cur.fi); ++i) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
  }

  return 0;
}
