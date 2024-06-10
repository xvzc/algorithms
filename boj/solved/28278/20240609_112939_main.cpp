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

  int N;
  int op, val;
  cin >> N;

  vector<int> s;
  while (N--) {
    cin >> op;
    if (op == 1) {
      cin >> val;
      s.push_back(val);
    }

    if (op == 2) {
      if (s.empty()) {
        cout << -1 << endl;
      } else {
        cout << s.back() << endl;
        s.pop_back();
      }
    }

    if (op == 3) {
      cout << s.size() << endl;
    }

    if (op == 4) {
      cout << (s.empty() ? 1 : 0) << endl;
    }

    if (op == 5) {
      cout << (s.empty() ? -1 : s.back()) << endl;
    }
  }

  return 0;
}
