#include <bits/stdc++.h>

#ifdef LOCAL
#define IF_LOCAL if constexpr (true)
#else
#define IF_LOCAL if constexpr (false)
#endif

#define debug IF_LOCAL std::cout << "[DEBUG]" << ' '
#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

template <typename X, typename Y>
ostream& operator<<(ostream& os, const pair<X, Y>& p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <class C, class T, class Container>
basic_ostream<C, T>& operator<<(basic_ostream<C, T>& os, Container const& c) {
  auto it = cbegin(c);
  os << "{";
  while (it != cend(c)) os << *it++ && it != cend(c) && os << ", ";
  return os << "}";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

// 50-30+10+22+13-20-10

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  string s;
  cin >> s;

  vector<int> nums;
  vector<char> signs;
  signs.push_back('+');

  string temp;
  for (auto c : s) {
    if ('0' <= c && c <= '9') {
      temp += c;
      continue;
    }

    nums.push_back(stoi(temp));
    temp.clear();
    signs.push_back(signs.back() == '-' ? '-' : c);
  }
  nums.push_back(stoi(temp));

  int ans = 0;
  for (int i = 0; i < nums.size(); ++i) {
    if (signs[i] == '+') {
      ans += nums[i];
      continue;
    }

    ans -= nums[i];
  }

  cout << ans << endl;

  return 0;
}
