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

template <typename X, typename Y>
std::ostream& operator<<(std::ostream& os, const std::pair<X, Y>& p) {
  return os << "(" << p.first << ", " << p.second << ")";
}

template <typename... Args>
std::ostream& operator<<(std::ostream& os, const std::tuple<Args...>& t) {
  os << "(";
  std::apply(
      [&os](const auto&... args) {
        ((os << args << ", "), ...);  // Fold expression
      },
      t);
  os.seekp(-2, std::ios_base::end);  // 마지막 ", " 제거
  os << ")";
  return os;
}

template <class C, class T, class S>
std::basic_ostream<C, T>& operator<<(std::basic_ostream<C, T>& os, S const& c) {
  os << "[";
  for (auto it = cbegin(c); it != cend(c); it++) os << *it && it != cend(c) && os << ", ";
  return os << "]";
}

using namespace std;

/* ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ */

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  pair<int, std::string> p = { 1, "hello" };
  tuple<int, double, string> t = { 42, 3.14, "world" };
  pair<string, tuple<int, double>> nestedPair = { "nested", { 10, 5.5 } };
  tuple<int, std::pair<std::string, float>, char> complexTuple = { 7,
                                                                   { "pair", 3.14f },
                                                                   'A' };

  std::cout << "Pair: " << p << endl;
  std::cout << "Tuple: " << t << endl;
  std::cout << "Nested Pair: " << nestedPair << endl;
  std::cout << "Complex Tuple: " << complexTuple << endl;

  return 0;
}
