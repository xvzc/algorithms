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
int visited[10];
int mini = 1e9;
int maxi = -1e9;

vector<int> nums;
int ops[4] = { 0, 0, 0, 0 };

int cal(int x, int y, int ops) {
  if (ops == 0) {
    return x + y;
  }

  if (ops == 1) {
    return x - y;
  }

  if (ops == 2) {
    return x * y;
  }

  return x / y;
}

void find(vector<int>& cur_ops) {
  if (cur_ops.size() == N - 1) {
    int n = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      n = cal(n, nums[i], cur_ops[i - 1]);
    }

    maxi = max(maxi, n);
    mini = min(mini, n);
    return;
  }

  for (int i = 0; i < 4; ++i) {
    if (ops[i] == 0) {
      continue;
    }

    cur_ops.push_back(i);

    ops[i]--;

    find(cur_ops);

    ops[i]++;
    cur_ops.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);
  cin >> N;

  nums = vector<int>(N);
  for (int i = 0; i < N; ++i) {
    cin >> nums[i];
  }

  for (int i = 0; i < 4; ++i) {
    cin >> ops[i];
  }

  vector<int> cur_ops = {};
  find(cur_ops);

  cout << maxi << endl;
  cout << mini << endl;

  return 0;
}
