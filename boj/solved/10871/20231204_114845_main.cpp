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

  int n, x;
  cin >> n >> x;

  vector<int> v;
  int a;
  for (int i = 0; i < n; ++i) {
    cin >> a;
    if (a < x) v.push_back(a);
  }

  for (auto i : v) cout << i << ' ';

  return 0;
}
