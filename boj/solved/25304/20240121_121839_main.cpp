#include <bits/stdc++.h>

#ifdef LOCAL
#define IF_LOCAL if constexpr (true)
#else
#define IF_LOCAL if constexpr (false)
#endif

#define debug IF_LOCAL std::cout << "[DEBUG] "
#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int expected, n, price, cnt;
  cin >> expected;
  cin >> n;

  int actual = 0;
  for (int i = 0; i < n; ++i) {
    cin >> price >> cnt;
    actual += price * cnt;
  }

  if (actual == expected) {
    cout << "Yes";

  } else {
    cout << "No";
  }

  return 0;
}

