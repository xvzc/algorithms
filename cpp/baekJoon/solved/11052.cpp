#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, j, N;
int dp[1001];

void solve(){
    cin >> N;
    for(i = 1; i <= N; ++i){
        cin >> dp[i];
    }

    for(i = 2; i <= N; i++){
        for(j = 1; j < i; ++j){
            dp[i] = max(dp[i], dp[i-j]+dp[j]);
        }
    }

    cout << dp[N]<< endl;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}