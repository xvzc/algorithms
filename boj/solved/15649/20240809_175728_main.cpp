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
int n, m;
bool visited[9] = {
  0,
};

void backtrack(vector<int>& v) {
  if (v.size() == m) {
    for (auto a : v) {
      cout << a << ' ';
    }
    cout << endl;
    return;
  }

  for (int i = 1; i <= n; ++i) {
    if (visited[i]) {
      continue;
    }

    visited[i] = true, v.push_back(i);
    backtrack(v);
    visited[i] = false, v.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  cin >> n >> m;

  vector<int> v;
  backtrack(v);

  return 0;
}

