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

  string a, b;
  cin >> a >> b;
  reverse(all(a)), reverse(all(b));

  string answer;

  if (stoi(a) > stoi(b)) {
    answer = a;
  } else {
    answer = b;
  }

  cout << answer;

  return 0;
}
