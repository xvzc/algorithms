#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int i, x, sum;

void solve(){
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    for(i=0; i < 5; i++){
        cin >> x;
        sum+=x*x;
    }

    cout << sum%10;

    solve();
    return 0;
}