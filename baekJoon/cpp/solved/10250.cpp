#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl cout<<'\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int T, H, W, N;
int stair, num_of_room;

void solve(){
    stair = N%H;
    num_of_room = N/H;
    num_of_room = stair != 0 ? num_of_room + 1 : num_of_room;
    stair = stair == 0 ? H : stair;
    cout << stair << std::setfill('0') << std::setw(2) << num_of_room; endl;

    #ifndef SUBMIT

    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> T;

    while(T-- > 0){
        cin >> H >> W >> N; 
        solve();
    }

    return 0;
}