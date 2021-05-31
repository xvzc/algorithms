#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int answer;
int N, M; 
char chess[50][50];

string white_start[8] = {    "WBWBWBWB",
                             "BWBWBWBW",
                             "WBWBWBWB",
                             "BWBWBWBW",
                             "WBWBWBWB",
                             "BWBWBWBW",
                             "WBWBWBWB",
                             "BWBWBWBW" };

string black_start[8] = {   "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB" };


int check(int x, int y, string board[]){
    int cnt = 0;
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            if(chess[i+x][j+y] != board[i][j])
                cnt++;
        }
    }

    return cnt;
}

void solve(){
    int cnt = 987654321;

    for(int i = 0;i < N-7; i++){
        for(int j = 0; j < M-7; j++){
            cnt = min(cnt, check(i, j, white_start));
            cnt = min(cnt, check(i, j, black_start));
        }
    }

    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N >> M;
    for(int n = 0; n < N; ++n){
        for(int m = 0; m < M; ++m){
            cin >> chess[n][m];
        }
    }

    solve();
    return 0;
}