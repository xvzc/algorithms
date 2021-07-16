#include <bits/stdc++.h>
#include <unordered_map>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;

void hanoi(int N, int from, int temp, int to){
    if (N == 1){
        cout << from << ' ' << to << endl;
        return;
    }
    else{
        hanoi(N-1, from, to, temp);
        cout << from << ' ' << to << endl;
        hanoi(N-1, temp, from, to);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> N;
    cout << (int)pow(2, N)-1 << endl;
    hanoi(N, 1, 2, 3);

    return 0;
}