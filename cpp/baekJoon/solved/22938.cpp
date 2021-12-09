#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    double ax, ay, ar, bx, by, br; cin >> ax >> ay >> ar >> bx >> by >> br;

    double d = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));


    if(d < ar + br)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}

