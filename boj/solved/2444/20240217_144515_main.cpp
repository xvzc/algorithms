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
  for (int i = 0; i < N - 1; ++i) {
    for (int j = 0; j < N - i - 1; ++j) {
      cout << ' ';
    }
    for (int j = 0; j < 2 * i + 1; ++j) {
      cout << '*';
    }
    cout << endl;
  }

  for (int i = 0; i < 2 * N - 1; ++i) {
    cout << '*';
  }
  cout << endl;

  for (int i = 0; i < N - 1; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << ' ';
    }
    for (int j = 0; j < 2 * (N - i - 1) - 1; ++j) {
      cout << '*';
    }
    cout << endl;
  }

  return 0;
}
