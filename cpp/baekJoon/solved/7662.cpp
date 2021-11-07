#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

#define SUBMIT
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef SUBMIT
    (void)!freopen("input.txt", "r", stdin);
    cout << "# From the test case" << endl;
#endif

    int T; cin >> T;
    while(T--) {
        multiset<int> ms;

        int N; 
        cin >> N;

        char c;
        int value;
        for(int i = 0; i < N; ++i) {
            cin >> c >> value;

            if(c == 'I') {
                ms.insert(value);
                continue;
            } 

            if(c == 'D' && value == 1) {
                if(!ms.empty())
                    ms.erase(prev(ms.end()));

                continue;
            }

            if(c == 'D' && value == -1) {
                if(!ms.empty())
                    ms.erase(ms.begin());

                continue;
            }
        }

        if(ms.empty())
            cout << "EMPTY" << endl;
        else
            cout << *ms.rbegin() << ' ' << *ms.begin() << endl;

    }

    return 0;
}
