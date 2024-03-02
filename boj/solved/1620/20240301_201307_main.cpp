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
  int N, M;
  cin >> N >> M;

  vector<string> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v[i];
  }

  string s;
  unordered_map<string, int> dict;
  for (int i = 0; i < v.size(); ++i) {
    dict[v[i]] = i;
  }

  string temp;
  for (int i = 0; i < M; ++i) {
    cin >> temp;
    bool is_number = true;
    for (auto& c : temp) {
      if (!isdigit(c)) {
        is_number = false;
        continue;
      }
    }

    if (is_number) {
      cout << v[stoi(temp) - 1] << endl;
    } else {
      cout << dict[temp] + 1 << endl;
    }
  }

  return 0;
}
