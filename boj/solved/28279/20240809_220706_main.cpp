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

  int n, op, x;
  cin >> n;
  deque<int> dq;
  for (int i = 0; i < n; ++i) {
    cin >> op;

    if (op == 1) {
      cin >> x;
      dq.push_front(x);
    }

    if (op == 2) {
      cin >> x;
      dq.push_back(x);
    }

    if (op == 3) {
      if (dq.empty()) {
        cout << -1 << endl;
        continue;
      }
      cout << dq.front() << endl;
      dq.pop_front();
    }

    if (op == 4) {
      if (dq.empty()) {
        cout << -1 << endl;
        continue;
      }

      cout << dq.back() << endl;
      dq.pop_back();
    }

    if (op == 5) {
      cout << dq.size() << endl;
    }

    if (op == 6) {
      if (dq.empty()) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
    }

    if (op == 7) {
      if (dq.empty()) {
        cout << -1 << endl;
      } else {
        cout << dq.front() << endl;
      }
    }

    if (op == 8) {
      if (dq.empty()) {
        cout << -1 << endl;
      } else {
        cout << dq.back() << endl;
      }
    }
  }

  return 0;
}
