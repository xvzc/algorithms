#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N; 
int age; 
string name;

bool compare_member(pair<int, string> a, pair<int, string> b){
        return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> N;
    vector<pair<int, string>> members(N);
    for(int i = 0; i < N; i++){
        cin >> members[i].first >> members[i].second;
    }

    stable_sort(members.begin(), members.end(), compare_member);

    for(int i = 0; i < N; i++){
        cout << members[i].first << ' ' << members[i].second << endl;
    }

    return 0;
}