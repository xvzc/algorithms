#include <bits/stdc++.h>
#include <unordered_map>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int i, j, N, T;
int non_prime[10001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    for(i=2; i<=10000; i++){
        for(j=i+i; j <= 10000; j+=i){
            if(!non_prime[j])
                non_prime[j] = true;
        }
    }

    cin >> T;
    while(T--){
        cin >> N;

        N = N >> 1; 
        for(i = N, j = N; non_prime[i] || non_prime[j]; i--, j++);
        cout << i << ' ' << j << endl;
    }

    return 0;
}