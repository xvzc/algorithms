#include <bits/stdc++.h>

#ifdef LOCAL
#define IF_LOCAL if constexpr (true)
#else
#define IF_LOCAL if constexpr (false)
#endif

#define debug IF_LOCAL std::cout << "[DEBUG] "
#define endl '\n'
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

struct Clock {
  int hour;
  int min;

  void add_hour(int h) {
    this->hour += h;
    this->hour = (24 + this->hour) % 24;
  }

  void add_min(int m) {
    this->min += m;

    if (this->min >= 60) {
      this->add_hour(1);
    }

    if (this->min < 0) {
      this->add_hour(-1);
    }

    this->min = (60 + this->min) % 60;
  }
};

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0);

  int h, m;
  cin >> h >> m;

  Clock c = { h, m };
  c.add_min(-45);

  cout << c.hour << ' ' << c.min;

  return 0;
}

