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
  vector<int> v;
  cin >> N;
  while (N--) {
    cin >> temp;
    v.push_back(temp);
  }

  sort(all(v));

  int g = v[0];
  for (int i = 1; i < v.size(); ++i) {
    g = lcm(g, v[i]);
  }

  int max = *max_element(all(v));

  if (g == max) {
    for (int i = 0; i < v.size(); ++i) {
      if (g * v[i] > max) {
        g = g * v[i];
        break;
      }
    }
  }

  cout << g << endl;

  return 0;
}
