#include <bits/stdc++.h>

#ifdef LOCAL
#define IF_LOCAL if constexpr (true)
#else
#define IF_LOCAL if constexpr (false)
#endif

#define debug IF_LOCAL std::cout
#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int N, M;
  cin >> N >> M;
  vector<int> baskets;
  for (int i = 0; i < N; ++i) {
    baskets.push_back(i + 1);
  }

  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    reverse(baskets.begin() + a - 1, baskets.begin() + b);
  }

  for (auto& i : baskets) {
    cout << i << ' ';
  }

  return 0;
}
