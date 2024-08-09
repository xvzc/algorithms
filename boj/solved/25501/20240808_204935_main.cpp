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

int cnt;

int recursion(string& s, int l, int r) {
  cnt++;
  if (l >= r)
    return 1;
  else if (s[l] != s[r])
    return 0;
  else {
    return recursion(s, l + 1, r - 1);
  }
}

int isPalindrome(string& s) { return recursion(s, 0, s.size() - 1); }

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int T;
  cin >> T;

  string s;
  for (int i = 0; i < T; ++i) {
    cnt = 0;
    cin >> s;
    cout << isPalindrome(s) << ' ' << cnt << endl;
  }

  return 0;
}
