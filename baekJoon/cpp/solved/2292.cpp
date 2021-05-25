#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;
int d = 6;
int cnt, shell = 1;

void solve(){
    while(shell < N){
        shell+=d;
        cnt++;
        d+=6;
    }
    cout << cnt+1;

    #ifndef SUBMIT

    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;
    solve();

    return 0;
}