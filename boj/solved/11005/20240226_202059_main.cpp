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

string letters[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B",
                     "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
                     "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int N, B;
  cin >> N >> B;
  int quotient = N;
  string answer = "";
  while (quotient) {
    answer += letters[quotient % B];
    quotient = quotient / B;
  }

  reverse(all(answer));
  cout << answer;

  return 0;
}
