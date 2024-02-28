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
  return os << "(" << p.first << ", " << p.second << ")";
}

template <class C, class T, class Container>
basic_ostream<C, T>& operator<<(basic_ostream<C, T>& os, Container const& c) {
  os << "{";
  auto it = c.begin();
  while (it != c.end()) os << *it++ && it != c.end() && os << ", ";
  return os << "}";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

bool check_if_group(string word) {
  unordered_set<char> uset;
  for (int i = 0; i < word.length(); ++i) {
    if (i > 0 && word[i - 1] != word[i] && uset.find(word[i]) != uset.end()) {
      return false;
    }
    uset.insert(word[i]);
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  int N;
  cin >> N;

  int answer = 0;
  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;

    if (check_if_group(s)) answer++;
  }

  cout << answer;

  return 0;
}
