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

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */
void print_provement(vector<int>& factors, int n) {
  cout << n << ' ' << '=' << ' ';

  for (int i = 0; i < factors.size(); ++i) {
    cout << factors[i];
    if (i != factors.size() - 1) {
      cout << " + ";
    }
  }

  cout << endl;
}

bool is_perfect(vector<int>& factors, int n) {
  int sum = accumulate(factors.begin(), factors.end(), 0);
  if (n == sum) {
    return true;
  }

  return false;
}

vector<int> find_factors(int n) {
  vector<int> factors;

  for (int i = 1; i*2 <= n; ++i) {
    if (n % i == 0) {
      factors.push_back(i);
    }
  }

  return factors;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int n;
  while (true) {
    cin >> n;
    if (n == -1) {
      break;
    }

    vector<int> factors = find_factors(n);
    if (is_perfect(factors, n)) {
      print_provement(factors, n);
    } else {
      cout << n << ' ' << "is NOT perfect." << endl;
    }
  }

  return 0;
}
