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

  // 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F
  int n;
  cin >> n;

  if (90 <= n && n <= 100) {
    cout << 'A' << endl;
  }

  if (80 <= n && n <= 89) {
    cout << 'B' << endl;
  }

  if (70 <= n && n <= 79) {
    cout << 'C' << endl;
  }

  if (60 <= n && n <= 69) {
    cout << 'D' << endl;
  }

  if (n < 60) {
    cout << 'F' << endl;
  }

  return 0;
}
