#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int T, x;
vector<int> v(3);

void solve(){
    if(v[0]*v[0] + v[1]*v[1] == v[2]*v[2])
        cout << "right" << endl;
    else
        cout << "wrong" << endl;

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    while(true){
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());

        if(v[0] == 0 && v[1] == 0 && v[2] == 0)
            break;

        solve();

    }
    return 0;
}