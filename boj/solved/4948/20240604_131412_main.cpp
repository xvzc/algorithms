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
bool prime[246913];

int number_of_prime(int n) {
  int ret = 0;

  for (int i = n + 1; i <= 2 * n; ++i) {
    if (prime[i]) {
      ret++;
    }
  }

  return ret;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  memset(prime, true, sizeof(prime));
  prime[0] = false;
  prime[1] = false;

  for (int i = 2; i * i < 246913; ++i) {
    if (!prime[i]) {
      continue;
    }

    for (int j = i + i; j < 246913; j += i) {
      prime[j] = false;
    }
  }

  int N;
  while (true) {
    cin >> N;
    if (N == 0) {
      break;
    }

    cout << number_of_prime(N) << endl;
  }

  return 0;
}
