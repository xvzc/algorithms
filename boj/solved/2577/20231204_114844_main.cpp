#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int a, b, c;
int cnt[10];
ll N;

void solve(){
    cin >> a >> b >> c;
    N = a*b*c;
    string num = to_string(N);

    for(int i = 0; i < num.length(); i++){
        cnt[num[i]-'0']++;
    }

    for(int i = 0; i < 10; i++){
        cout << cnt[i] << endl;
    }

    /* CODE */

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    solve();
    return 0;
}