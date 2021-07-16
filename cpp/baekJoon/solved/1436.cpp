#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int num;
int cnt;

void solve(int N){
    int i;
    for(i = 1; cnt < num; i++){
        if(to_string(i).find("666") != string::npos){
            // cout << i << endl;
            cnt++;
        }
    }
    cout << i-1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> num;
    
    // for(int i = 1; i < 100; i++){
    //     solve(i);
    // }
    solve(num);
    return 0;
}