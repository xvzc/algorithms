#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int sudoku[9][9];
int answer[9][9];
int num_of_blanks;
int blanks[81][2];
bool done;

bool check_available(int x, int y, int value){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(sudoku[(x/3)*3 + i][(y/3)*3 + j] == value)
                return false;
        }
    }

    for(int i = 0; i < 9; i++){
        if(sudoku[x][i] == value || sudoku[i][y] == value)
            return false;
    }

    return true;
}

void dfs(int depth, int start) {
    if(depth == num_of_blanks){
        memcpy (answer, sudoku, sizeof(sudoku));
        done = true;
        return;
    }

        for(int j = 1; j <= 9; j++) {
            if(!check_available(blanks[start][0], blanks[start][1], j))
                continue;

            sudoku[blanks[start][0]][blanks[start][1]] = j;

            dfs(depth+1, start+1);
            if(done)
                return;

            sudoku[blanks[start][0]][blanks[start][1]] = 0;
        }
}

void solve(){
    dfs(0, 0);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << answer[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> sudoku[i][j];
            if(sudoku[i][j] == 0){
                blanks[num_of_blanks][0] = i;
                blanks[num_of_blanks][1] = j;
                num_of_blanks++;
            }

        }
    }

    solve();

    return 0;
}