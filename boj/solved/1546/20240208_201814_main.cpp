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
  vector<double> scores(N, 0);
  for (int i = 0; i < N; ++i) {
    cin >> scores[i];
  }

  double sum = 0;
  for (auto& i : scores) sum += i;
  int max = *max_element(scores.begin(), scores.end());
  cout << (sum / N) / max * 100;

  return 0;
}
