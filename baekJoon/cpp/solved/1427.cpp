#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;


void solve(){
    
}

string str;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    cin >> str;

    vector<int> nums;
    for(int i = 0; i < str.length(); i++){
        int num = str.at(i) - '0';
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    for(int i = nums.size()-1; i >= 0; i--){
        cout << nums[i]; 
    }

    solve();
    return 0;
}