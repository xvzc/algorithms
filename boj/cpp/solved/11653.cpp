#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
int i, N;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N;

    for(i=2; i*i <= N; i++){
        while(N%i == 0){
            cout << i << endl;
            N/=i;
        }
    }
    if(N > 1)
        cout << N;

    return 0;
}