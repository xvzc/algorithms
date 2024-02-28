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
  int n;
  string s;
  cin >> n;
  cin >> s;

  int sum = 0;
  for (auto c : s) {
    sum += (c - '0');
  }

  cout << sum << endl;

  return 0;
}
