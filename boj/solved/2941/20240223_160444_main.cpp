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
unordered_set<string> croatian = {
  "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=",
};

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  string s;
  cin >> s;

  int answer = 0;
  while (!s.empty()) {
    if (croatian.find(s.substr(0, 2)) != croatian.end()) {
      s = s.substr(2);
      answer++;
      continue;
    }

    if (croatian.find(s.substr(0, 3)) != croatian.end()) {
      s = s.substr(3);
      answer++;
      continue;
    }

    answer++;
    s = s.substr(1);
  }

  cout << answer;

  return 0;
}
