#include <bits/stdc++.h>

using namespace std;

int x, y, w, h;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> x >> y >> w >> h;
    cout << min(min(x, y), min(w-x, h-y));

    return 0;
}