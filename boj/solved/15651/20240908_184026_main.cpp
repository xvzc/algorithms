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
int N, M;
vector<int> numbers;

void find(int target) {
  if (target == 0) {
    for (auto x : numbers) {
      cout << x << ' ';
    }
    cout << endl;

    return;
  }

  for (int i = 1; i <= N; ++i) {
    numbers.push_back(i);
    find(target - 1);
    numbers.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  cin >> N >> M;

  find(M);

  return 0;
}

