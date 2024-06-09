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
int find_goldbach_partition(int n, vector<char>& is_prime) {
  int ret = 0;
  for (int i = 2; i <= n / 2; ++i) {
    if (is_prime[i] && is_prime[n - i]) {
      ret++;
    }
  }

  return ret;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  vector<char> is_prime(1000001, true);
  is_prime[0] = false;
  is_prime[1] = false;

  for (int i = 2; i * i <= 1000000; ++i) {
    if (!is_prime[i]) {
      continue;
    }

    for (int j = i + i; j <= 1000000; j += i) {
      is_prime[j] = false;
    }
  }

  int T, N;
  cin >> T;

  for (int i = 0; i < T; ++i) {
    cin >> N;
    cout << find_goldbach_partition(N, is_prime) << endl;
  }

  return 0;
}
