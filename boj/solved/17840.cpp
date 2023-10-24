#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

ll Q; // Test case
ll M; // remainder
ull N;

vector<ll> dp_mod = {0, 1, 1};
string dp_str = "011";

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> Q >> M;

    for(ll i = 3; ; ++i){
        dp_mod.push_back((dp_mod[i-1]%M + dp_mod[i-2]%M)%M);

        if(dp_mod[i] == 0 && dp_mod[i-1] == 1)
            break;

        dp_str += to_string(dp_mod[i]);
    }

    for(ll i = 0; i < Q; i++){
        cin >> N;
        ll q = N%dp_str.length();
        cout << dp_str[q] << endl;
    }

    return 0;
}
