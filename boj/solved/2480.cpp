#include <bits/stdc++.h>

#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

#define better_io                   \
  ios_base::sync_with_stdio(false); \
  cin.tie(0)
#define debug \
  if constexpr (IS_LOCAL) std::cout

#ifdef LOCAL
constexpr bool IS_LOCAL = true;
#else
constexpr bool IS_LOCAL = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* Authored by xvzc, 2023-10-08 17:54:13 */
int main() {
  better_io;

  if constexpr (IS_LOCAL) (void)!freopen("input.txt", "r", stdin);
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b and b == c and a == c) {
    cout << 10000 + a * 1000 << endl;
    return 0;
  }

  if (a == b or b == c) {
    cout << 1000 + b * 100 << endl;
    return 0;
  }

  if (b == c or a == c) {
    cout << 1000 + c * 100 << endl;
    return 0;
  }

  cout << max({a, b, c}) * 100 << endl;

  return 0;
}
