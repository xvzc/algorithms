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
  string s;
  cin >> s;
  for (int i = 'a'; i <= 'z'; ++i) {
    auto found = s.find(i);
    if (found != string::npos) {
      cout << s.find(i) << ' ';
    } else {
      cout << -1 << ' ';
    }
  }

  return 0;
}
