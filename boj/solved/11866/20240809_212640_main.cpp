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
  int k, n;
  cin >> k >> n;
  queue<int> q;
  for (int i = 1; i <= k; ++i) {
    q.push(i);
  }

  int cnt = 1;
  vector<int> v;
  while (!q.empty()) {
    if (cnt != n) {
      cnt++;
      q.push(q.front());
    } else {
      v.push_back(q.front());
      cnt = 1;
    }

    q.pop();
  }

  string answer = "";
  for (auto n : v) {
    answer += to_string(n);
    answer += ", ";
  }
  answer.pop_back();
  answer.pop_back();

  cout << '<' << answer << '>';

  return 0;
}