#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl cout<<'\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int T, a, b;

int cal(int x, int y){
    if(y == 1)
        return 1;
    if(x == 0)
        return y;

    return cal(x, y-1) + cal(x-1, y);
}

void solve(){

    cout << cal(a, b); endl;
    #ifndef SUBMIT

    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> T;
    while(T-- > 0){
        cin >> a >> b;
        solve();
    }

    return 0;
}