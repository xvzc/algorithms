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

  int N;
  cin >> N;

  int min = 1e9, max = -1e9, temp;
  for (int i = 0; i < N; ++i) {
    cin >> temp;
    min = std::min(min, temp);
    max = std::max(max, temp);
  }

  cout << min << ' ' << max;

  return 0;
}

