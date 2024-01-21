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


  int temp;
  int max_idx = -1;
  int max_value = -1e9;
  for (int i = 1; i <= 9; ++i) {
    cin >> temp;

    if(temp > max_value) {
      max_value = temp;
      max_idx = i;
    }
  }

  cout << max_value << endl;
  cout << max_idx << endl;

  return 0;
}

