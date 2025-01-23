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

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */
int N;
vector<vector<int>> fit;
vector<int> home;
vector<int> away;
bool check[20];
int mini = 1e9;

int cal_team_power(vector<int>& team) {
  int power = 0;
  for (int i = 0; i < team.size() - 1; ++i) {
    for (int j = i + 1; j < team.size(); ++j) {
      power += fit[team[i]][team[j]] + fit[team[j]][team[i]];
    }
  }

  return power;
}

void find(int start, int cnt) {
  if (cnt == N / 2) {
    vector<int> home;
    vector<int> away;
    for (int i = 0; i < N; ++i) {
      if (check[i]) {
        home.push_back(i);
      } else {
        away.push_back(i);
      }
    }

    // debug << home << endl;
    // debug << away << endl;

    mini = min(mini, abs(cal_team_power(home) - cal_team_power(away)));
    return;
  }

  for (int i = start; i < N; ++i) {
    check[i] = true;
    find(i + 1, cnt + 1);
    check[i] = false;
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  cin >> N;
  fit = vector<vector<int>>(N, vector<int>(N));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> fit[i][j];
    }
  }

  find(0, 0);
  cout << mini;

  return 0;
}
