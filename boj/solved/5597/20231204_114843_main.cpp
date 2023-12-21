#include <bits/stdc++.h>

#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
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
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  if constexpr (IS_LOCAL) (void)!freopen("input.txt", "r", stdin);

  int num;
  bool checks[31] = {
      false,
  };
  for (int i = 1; i < 29; ++i) {
    cin >> num;
    checks[num] = true;
  }

  for (int i = 1; i < 31; ++i) {
    if (!checks[i]) {
      cout << i << endl;
    }
  }

  return 0;
}
