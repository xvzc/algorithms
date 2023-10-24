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

  int persons[3]; cin >> persons[0] >> persons[1] >> persons[2];
  sort(persons, &persons[3]);
  cout << persons[1] << endl;

  return 0;
}
