#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

bool visited[15][15];
int N, answer;

bool is_okay(int x, int y){
        for(int j = 0; j < N; j++){
            if(visited[x][j] || visited[j][y])
                return false;
        }

        for(int j = 1; j < N; j++){
            if(x-j >= 0 && y-j >= 0 && visited[x-j][y-j])
                    return false;
            
            if(x+j < N && y+j < N && visited[x+j][y+j])
                    return false;

            if(x-j >= 0 && y+j < N && visited[x-j][y=j])
                    return false;
            
            if(x+j < N && y-j >= 0 && visited[x+j][y-j])
                    return false;
        }

    return true;
}

void dfs(int col){
    if(col == N){
        answer++;
        return;

    }

    for(int i = 0 ; i < N; ++i){
        if(!visited[col][i] && is_okay(col, i)){
            visited[col][i] = true;
            dfs(col+1);
            visited[col][i] = false;
        }
    }
}

void solve(){
    dfs(0);
    cout << answer;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;


    solve();
    return 0;
}