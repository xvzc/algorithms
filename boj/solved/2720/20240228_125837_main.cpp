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

vector<int> make_changes(int amount) {
  vector<int> ret;
  ret.push_back(amount / 25);
  amount %= 25;

  ret.push_back(amount / 10);
  amount %= 10;

  ret.push_back(amount / 5);
  amount %= 5;

  ret.push_back(amount);

  return ret;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int T;
  cin >> T;
  for (int i = 0; i < T; ++i) {
    int C;
    cin >> C;
    vector<int> changes = make_changes(C);
    for (auto c : changes) {
      cout << c << ' ';
    }
    cout << endl;
  }

  return 0;
}
