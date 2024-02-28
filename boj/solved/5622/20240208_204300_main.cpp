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

  int answer = 0;
  for (auto c : s) {
    if (string("ABC").find(c) != string::npos) {
      answer += 3;
      continue;
    }

    if (string("DEF").find(c) != string::npos) {
      answer += 4;
      continue;
    }

    if (string("GHI").find(c) != string::npos) {
      answer += 5;
      continue;
    }

    if (string("JKL").find(c) != string::npos) {
      answer += 6;
      continue;
    }

    if (string("MNO").find(c) != string::npos) {
      answer += 7;
      continue;
    }

    if (string("PQRS").find(c) != string::npos) {
      answer += 8;
      continue;
    }

    if (string("TUV").find(c) != string::npos) {
      answer += 9;
      continue;
    }

    if (string("WXYZ").find(c) != string::npos) {
      answer += 10;
      continue;
    }
  }
  cout << answer;
  return 0;
}
