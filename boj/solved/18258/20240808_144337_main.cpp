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
  cin >> N;
  string op;
  int val;

  queue<int> q;
  while (N--) {
    cin >> op;

    if (op == "push") {
      cin >> val;
      q.push(val);
      continue;
    }

    if (op == "pop") {
      if (q.empty()) {
        cout << -1 << endl;
      } else {
        cout << q.front() << endl;
        q.pop();
      }
      continue;
    }

    if (op == "size") {
      cout << q.size() << endl;
    }

    if (op == "empty") {
      cout << q.empty() << endl;
    }

    if (op == "front") {
      if (q.empty()) {
        cout << -1 << endl;
      } else {
        cout << q.front() << endl;
      }
      continue;
    }

    if (op == "back") {
      if (q.empty()) {
        cout << -1 << endl;
      } else {
        cout << q.back() << endl;
      }
      continue;
    }
  }

  return 0;
}
