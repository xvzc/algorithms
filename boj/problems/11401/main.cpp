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
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

template <typename X, typename Y>
inline ostream& operator<<(ostream& os, const pair<X, Y>& p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <class C, class T, class Container>
inline basic_ostream<C, T>& operator<<(basic_ostream<C, T>& os, Container const& c) {
  auto it = cbegin(c);
  os << "{";
  while (it != cend(c)) os << *it++ && it != cend(c) && os << ", ";
  return os << "}";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */
vector<ll> factorials;

ll fast_exponent(ll base, int power, int mod) {
  ll ret = 1;
  while (power) {
    if (power % 2) {
      ret = ret * base % mod;
    }

    power /= 2;
    base = base * base % mod;
  }

  return ret;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int n, k;
  cin >> n >> k;

  ll fact_k = 1;
  for (int i = 1; i <= n - k; ++i) {
    fact_k = (fact_k * i) % MOD;
  }

  ll fact_n = 1;
  for (int i = k + 1; i <= n; ++i) {
    fact_n = (fact_n * i) % MOD;
  }

  cout << (fact_n * fast_exponent(fact_k, 1000000005, MOD)) % MOD << endl;

  return 0;
}

