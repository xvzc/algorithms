#include <bits/stdc++.h>

#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define debug \
  if constexpr (IS_LOCAL) std::cout

#ifdef LOCAL
constexpr bool IS_LOCAL = true;
#else
constexpr bool IS_LOCAL = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* Authored by xvzc, 2023-10-08 17:54:13 */
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  if constexpr (IS_LOCAL) (void)!freopen("input.txt", "r", stdin);
  unordered_map<string, string> umap = {
    {"A+", "4.3"},
    {"A0", "4.0"},
    {"A-", "3.7"},
    {"B+", "3.3"},
    {"B0", "3.0"},
    {"B-", "2.7"},
    {"C+", "2.3"},
    {"C0", "2.0"},
    {"C-", "1.7"},
    {"D+", "1.3"},
    {"D0", "1.0"},
    {"D-", "0.7"},
    {"F", "0.0"},
  };

  string s; cin >> s;
  cout << umap[s];

  return 0;
}
