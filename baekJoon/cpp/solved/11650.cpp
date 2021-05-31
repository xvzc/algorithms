#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N, x, y;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N;

    vector<pair<int,int>> pairs;
    while(N--){
        cin >> x >> y;
        pairs.push_back(make_pair(x, y));
    }

    sort(pairs.begin(), pairs.end());
    for(int i = 0; i < pairs.size(); ++ i){
        cout << pairs[i].first << ' ' << pairs[i].second << endl;
    }

    return 0;
}