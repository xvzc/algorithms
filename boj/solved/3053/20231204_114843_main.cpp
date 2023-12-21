#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

double N;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    
    cin >> N;

    cout << fixed;
    cout.precision(6);

    cout << N*N*3.1415926535897 << endl;
    cout << 2*N*N << endl;

    return 0;
}