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

bool compare(string s1, string s2) {
  if (s1.length() == s2.length()) {
    return s1 < s2;
  }

  return s1.length() < s2.length();
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int N;
  cin >> N;
  vector<string> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v[i];
  }

  sort(all(v), compare);

  v.erase(unique(v.begin(), v.end()), v.end());
  for (auto& s : v) {
    cout << s << endl;
  }

  return 0;
}
