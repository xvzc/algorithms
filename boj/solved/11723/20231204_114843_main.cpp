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

/* - GLOBAL VARIABLES ---------------------------- */
 
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
string set_to_string(set<int> s) {
    string result = "{";
    for(auto i : s) {
        result+=to_string(i);
        result+=", ";
    }

    return result.substr(0, result.length()-2) + "}";
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    int M; cin >> M;

    set<int> all = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    set<int> s;

    string op; int value;
    for(int i = 0; i < M; ++i) {
        cin >> op;
        if(op == "all") {
            s = all;
            continue;
        }
        if(op == "empty") {
            s.clear();
            continue;
        }

        cin >> value;
        if(op == "add") {
            if(0 <= value && value <= 20)
                s.insert(value);

            continue;
        }
        if(op == "remove") {
            if(0 <= value && value <= 20)
                s.erase(value);

            continue;
        }
        if(op == "check") {
            set<int>::iterator it = s.find(value);
            if(it == s.end())
                cout << 0 << endl;
            else
                cout << 1 << endl;

            continue;
        }
        if(op == "toggle") {
            if(s.find(value) != s.end())
                s.erase(value);
            else
                s.insert(value);

            continue;
        }
    }

    return 0;
}

