#include <bits/stdc++.h>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int i, j, n;
string answer;

void star(int x, int y, int size) {
    if ((x/size) % 3 == 1 && (y/size) % 3 == 1) 
        cout << " ";
    else {
        if (size == 1) 
            cout << "*";
        else
            star(x, y, size / 3);
    }
}

void solve(){
    for(;i < n; i++) {
        for(j=0;j < n; j++) {
            star(i, j, n);
        }
        cout << '\n';
    }
    cout << answer;
}

int main(){
    cin >> n;
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}