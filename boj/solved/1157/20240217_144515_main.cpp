#include <bits/stdc++.h>

#ifdef LOCAL
#define IF_LOCAL if constexpr (true)
#else
#define IF_LOCAL if constexpr (false)
#endif

#define debug IF_LOCAL std::cout
#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

bool compare(pair<int, int> &p1, pair<int, int> &p2) { return p1.se > p2.se; }

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  string s;
  cin >> s;

  for (auto &c : s) c = toupper(c);

  vector<pair<int, int>> cnt;
  for (int i = 0; i < 26; ++i) {
    cnt.push_back({ i, 0 });
  }

  for (auto c : s) {
    cnt[c - 'A'].se++;
  }

  sort(all(cnt), compare);

  if (cnt.size() > 1 && cnt[0].se == cnt[1].se) {
    cout << "?" << endl;
    return 0;
  }

  cout << char('A' + cnt[0].fi) << endl;

  return 0;
}
