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
  auto it = c.begin();
  os << "{";
  while (it != c.end()) os << *it++ && it != c.end() && os << ", ";
  return os << "}";
}

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

unordered_map<string, double> weight_map = {
  { "A+", 4.5 }, { "A0", 4.0 }, { "B+", 3.5 }, { "B0", 3.0 }, { "C+", 2.5 },
  { "C0", 2.0 }, { "D+", 1.5 }, { "D0", 1.0 }, { "F", 0.0 },
};

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int count = 0;
  double sum_of_multiplies = 0.0;
  double sum_of_scores = 0.0;
  for (int i = 0; i < 20; ++i) {
    string name, grade;
    double score;
    cin >> name >> score >> grade;
    count++;

    if (grade == "P") {
      continue;
    }

    sum_of_multiplies += weight_map[grade]*score;
    sum_of_scores += score;
  }

  cout << sum_of_multiplies / sum_of_scores;

  return 0;
}
