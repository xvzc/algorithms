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

  int N, a, b;
  cin >> N;
  vector<int> x_points;
  vector<int> y_points;

  for (int i = 0; i < N; ++i) {
    cin >> a >> b;
    x_points.push_back(a);
    y_points.push_back(b);
  }

  int min_x = *min_element(x_points.begin(), x_points.end());
  int max_x = *max_element(x_points.begin(), x_points.end());

  int min_y = *min_element(y_points.begin(), y_points.end());
  int max_y = *max_element(y_points.begin(), y_points.end());

  cout << (max_x - min_x) * (max_y - min_y) << endl;

  return 0;
}
