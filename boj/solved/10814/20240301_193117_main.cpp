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
struct member {
  int age;
  string name;
  int order;
};

bool compare(member m1, member m2) {
  if (m1.age == m2.age) {
    return m1.order < m2.order;
  }

  return m1.age < m2.age;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int N;
  cin >> N;
  vector<member> members(N);
  for (int i = 0; i < N; ++i) {
    cin >> members[i].age >> members[i].name;
    members[i].order = i;
  }

  sort(all(members), compare);

  for (auto m : members) {
    cout << m.age << ' ' << m.name << endl;
  }

  return 0;
}
