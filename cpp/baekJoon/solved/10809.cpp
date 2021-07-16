#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, j, k;
vector<int> idx(123, -1);
string s;

void solve(){
    cin >> s;
    for(i = 0; i < s.length(); i++){
        if(idx[(int)s[i]] == -1){
            idx[(int)s[i]] = i; 
        }
    }
    for(j = 97; j < 123; j++){
        cout << idx[j] << ' ';
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