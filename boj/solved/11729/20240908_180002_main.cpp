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
void hanoi(int remain, int from, int to) {
  if (remain == 1) {
    cout << from << ' ' << to << endl;
    return;
  }

  int other = 6 - from - to;

  hanoi(remain - 1, from, other);
  hanoi(1, from, to);
  hanoi(remain - 1, other, to);
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;

  cout << (1 << n) - 1 << endl;
  hanoi(n, 1, 3);

  return 0;
}
