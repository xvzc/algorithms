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

bool is_promising(vector<vector<int>>& board, int y, int x) {
  for (int i = 0; i < y; ++i) {
    if (board[i][x]) {
      return false;
    }
  }

  int i, j;
  i = y - 1, j = x - 1;
  while (i >= 0 and j >= 0) {
    if (board[i][j]) {
      return false;
    }
    i--, j--;
  }

  i = y - 1, j = x + 1;
  while (i >= 0 and j < board.size()) {
    if (board[i][j]) {
      return false;
    }
    i--, j++;
  }

  return true;
}

int find(vector<vector<int>>& board, int row, int depth) {
  if (depth == N) {
    return 1;
  }

  int answer = 0;
  for (int i = 0; i < board.size(); ++i) {
    if (!is_promising(board, row, i)) {
      continue;
    }

    board[row][i] = 1;
    answer += find(board, row + 1, depth + 1);
    board[row][i] = 0;
  }

  return answer;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  cin >> N;
  vector<vector<int>> board(N, vector<int>(N, 0));
  cout << find(board, 0, 0);

  return 0;
}
