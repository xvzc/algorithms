#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int cards[100];
int N, M, max_sum, sum_cards;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(i==j)
                continue;

            for(int k = 0; k < N; ++k) {
                if(j == k || i == k)
                    continue;

                sum_cards = cards[i] + cards[j] + cards[k];
                if( sum_cards > max_sum && sum_cards <= M)
                    max_sum = sum_cards;
            }
        }
    }

    cout << max_sum << endl;

    return 0;
}