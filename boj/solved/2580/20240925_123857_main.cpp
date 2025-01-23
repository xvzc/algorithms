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
int sdoku[9][9];
vector<pair<int, int>> blanks;

bool is_promising(int val, int target_y, int target_x) {
  int y_start = (target_y / 3) * 3;
  int x_start = (target_x / 3) * 3;
  for (int dy = 0; dy < 3; ++dy) {
    for (int dx = 0; dx < 3; ++dx) {
      if (sdoku[y_start + dy][x_start + dx] == val) {
        return false;
      }
    }
  }

  for (int i = 0; i < 9; ++i) {
    if (sdoku[target_y][i] == val) {
      return false;
    }

    if (sdoku[i][target_x] == val) {
      return false;
    }
  }

  return true;
}

void find(int idx) {
  if (idx == blanks.size()) {
    for (int i = 0; i < 9; ++i) {
      for (int j = 0; j < 9; ++j) {
        cout << sdoku[i][j] << ' ';
      }
      cout << endl;
    }

    exit(0);
  }

  pair<int, int> cur_blank = blanks[idx];
  for (int val = 1; val <= 9; ++val) {
    if (!is_promising(val, cur_blank.fi, cur_blank.se)) {
      continue;
    }

    sdoku[cur_blank.fi][cur_blank.se] = val;
    find(idx + 1);
    sdoku[cur_blank.fi][cur_blank.se] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  for (int y = 0; y < 9; ++y) {
    for (int x = 0; x < 9; ++x) {
      cin >> sdoku[y][x];
      if (sdoku[y][x] == 0) {
        blanks.push_back({ y, x });
      }
    }
  }

  find(0);

  return 0;
}
