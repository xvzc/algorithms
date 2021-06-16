#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;
int A_N[11];
int _plus, _minus, _multiply, _divide;
int _max = -100000000;
int _min =  100000000;

void dfs(int value, int depth){
    if(depth == N-1) {
        if(value < _min)
            _min = value;

        if(value > _max)
            _max = value;

        return;
    }

    if(_plus > 0) {
        --_plus;
        dfs(value + A_N[depth+1], depth+1);
        ++_plus;
    }

    if(_minus > 0) {
        --_minus;
        dfs(value - A_N[depth+1], depth+1);
        ++_minus;
    }

    if(_multiply > 0) {
        --_multiply;
        dfs(value * A_N[depth+1], depth+1);
        ++_multiply;
    }

    if(_divide > 0) {
        --_divide;
        dfs(value / A_N[depth+1], depth+1);
        ++_divide;
    }

    return;
}

void solve(){
    dfs(A_N[0] ,0);
    cout << _max << endl;
    cout << _min;
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;
    for(int i=0; i < N; i++)
        cin >> A_N[i];

    cin >> _plus >> _minus >> _multiply >> _divide;

    solve();
    return 0;
}