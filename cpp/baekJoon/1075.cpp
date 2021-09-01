#include <bits/stdc++.h>

#define io_faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define from_test_case (void)!freopen("input.txt", "r", stdin)
#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

// GLOBAL VARIABLES ****************
// *********************************

// FUNCTIONS ***********************
// *********************************

#define SUBMIT
int main() {
    io_faster;

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif
    int n,f;
    cin >> n >> f ;
    n = (n/100)*100;
    int i;
    for(i=0; i < 100; i++) {
        if( (n+i)%f == 0)
            break;
    }
    if(i < 10)
        cout << 0;
    cout << i << endl;
    return 0;
}

