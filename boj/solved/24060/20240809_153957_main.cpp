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
int n, k, cnt = 0;
int answer = -1;
vector<int> tmp;

void merge(vector<int>& v, int p, int q, int r) {
  int i = p, j = q + 1, t = 1;
  while (i <= q and j <= r) {
    if (v[i] <= v[j]) {
      tmp[t++] = v[i++];
    } else {
      tmp[t++] = v[j++];
    }
  }

  while (i <= q) {
    tmp[t++] = v[i++];
  }

  while (j <= r) {
    tmp[t++] = v[j++];
  }

  i = p, t = 1;
  while (i <= r) {
    cnt++;
    if (cnt == k) {
      answer = tmp[t];
    }
    v[i++] = tmp[t++];
  }
}

void merge_sort(vector<int>& v, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    merge_sort(v, p, q);
    merge_sort(v, q + 1, r);
    merge(v, p, q, r);
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  cin >> n >> k;
  vector<int> v(500001);
  tmp = vector<int>(500001);

  for (int i = 1; i <= n; ++i) {
    cin >> v[i];
  }

  merge_sort(v, 1, n);

  cout << answer;

  return 0;
}
