#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;
int S[20][20];
int min_ = INT_MAX;
bool visited[20];

void dfs(int start, int depth) {
    int home[10];
    int away[10];
    int home_idx=0;
    int away_idx=0;

    if(depth == N/2){
        for(int i = 0; i < N; i++){
            if(visited[i])
                home[home_idx++] = i;
            else
                away[away_idx++] = i;
        }

        int home_sum = 0;
        int away_sum = 0;;

        for(int i = 0; i < N/2; i++){
            for(int j = 0; j < N/2; j++){
                home_sum += S[home[i]][home[j]];
                away_sum += S[away[i]][away[j]];
            }
        }

        int diff = abs(home_sum - away_sum);

        if(diff < min_)
            min_ = diff;

        return;
    }

    for(int i = start; i < N; i++){
        if(visited[i])
            continue;

        visited[i] = true;
        dfs(i+1, depth+1);
        visited[i] = false;
    }

    return;
}

void solve(){
    dfs(0, 0);
    cout << min_ << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;
    for( int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> S[i][j];
        }
    }

    solve();
    return 0;
}