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

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n;
  cin >> n;
  vector<int> distances(n - 1);
  vector<int> prices(n);

  for (int i = 0; i < n - 1; ++i) {
    cin >> distances[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> prices[i];
  }

  ll cost = 0;
  int cur_price = prices[0];
  int d = distances[0];
  for (int i = 1; i < n; ++i) {
    if (prices[i] < cur_price) {
      cost += (ll)d * cur_price;
      cur_price = prices[i];
      d = 0;
    }

    d += distances[i];
  }

  cost += (ll)d * cur_price;

  cout << cost << endl;

  return 0;
}
