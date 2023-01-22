#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int N, cnt;
bool mod[42];


void solve(){
    for(int i = 0; i < 10; i++){
        cin >> N;
        if(mod[N%42])
            continue;
        else{
            mod[N%42] = true;
            cnt++;
        }
    }
    cout << cnt;

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