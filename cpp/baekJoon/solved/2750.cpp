#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N, x;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i]; 
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++){
        cout << v[i] << endl;
    }

    return 0;
}