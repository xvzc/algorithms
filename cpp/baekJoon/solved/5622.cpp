#include <bits/stdc++.h>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i, answer;
string n = "11122233344455566667778888";
string s;

void solve(){
    cin >> s;
    for(i=0; i<s.length(); i++){
        answer +=(n[(int)(s[i] - 'A')] - '0')+2;
    }
    cout << answer;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}