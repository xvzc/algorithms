#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, j, k;
ll N, sum, cnt;
string s;


void solve(){
    cin >> s;
    sum = 0;
    cnt = 0;
    for(i = 0; i < s.length(); i++){
        if(s[i]=='O')
            cnt++;
        else{
            cnt=0;
        }
        sum+=cnt;
    }
    /* CODE */
    cout << sum << endl;

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    cin >> N;
    for(int n = 0; n < N; n++){
        solve();
    }
    return 0;
}