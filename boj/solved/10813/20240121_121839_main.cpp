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

  int N, M, x, y;
  cin >> N >> M;

  vector<int> baskets = vector<int>(N + 1);
  for (int i = 0; i <= N; ++i) {
    baskets[i] = i;
  }

  for (int i = 0; i < M; ++i) {
    cin >> x >> y;
    if (x == y) continue;

    baskets[x] += baskets[y];
    baskets[y] = baskets[x] - baskets[y];
    baskets[x] -= baskets[y];
  }

  for (int i = 1; i < baskets.size(); ++i) {
    cout << baskets[i] << ' ';
  }

  return 0;
}

