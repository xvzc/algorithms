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

unordered_map<string, int> cnt_map;

bool compare(string s1, string s2) {
  if (cnt_map[s1] > cnt_map[s2]) {
    return true;
  }

  if (cnt_map[s1] < cnt_map[s2]) {
    return false;
  }

  if (s1.length() > s2.length()) {
    return true;
  }

  if (s1.length() < s2.length()) {
    return false;
  }

  return s1 < s2;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n, m;
  string s;
  vector<string> v;
  unordered_set<string> uset;
  cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    cnt_map[s]++;
    if (s.length() < m) {
      continue;
    }

    if (uset.find(s) != uset.end()) {
      continue;
    }

    uset.insert(s);
    v.push_back(s);
  }

  sort(all(v), compare);

  for (auto s : v) {
    cout << s << endl;
  }

  return 0;
}
