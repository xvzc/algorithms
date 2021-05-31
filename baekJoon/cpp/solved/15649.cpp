#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N, M;
vector<int> nums(9);
bool visited[9];

void dfs(int count){
    if(count == M){
        for(int i = 1; i <= M; ++i){
            cout << nums[i] << ' ';
        }
        cout << endl;
    }

    for(int i = 1; i <= N; ++i){
        if(!visited[i]){
            visited[i] = true;

            if(i > nums[count]){
                nums[count+1] = i;
                dfs(count + 1);
            }
            visited[i] = false;
        }
    }
}

void solve(){
   dfs(0);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N >> M;

    solve();
    return 0;
}