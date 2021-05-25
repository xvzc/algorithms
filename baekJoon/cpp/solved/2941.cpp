#include <bits/stdc++.h>
#include <unordered_map>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
ll i, j;
string s;
int answer;

unordered_map<string, int> hmap;

int find_croatian(int k) {
    int index = k;

    for(j=1; j < 3; j++){
        if(k-j < 0)
            break;

        string key = s.substr(k-j, j+1);

        if(hmap.find(key) != hmap.end()){
            index = k-j;
            // cout << index << endl;
        }
    }

    return index;
}

void solve(){
    cin >> s;
    for(i = s.length()-1; i>=0; --i){
        if(s[i] == '=' || s[i] == '-' || s[i] == 'j')
            i = find_croatian(i);

        answer++;
    }
    
    cout << answer;

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef SUBMIT
    freopen("input.txt", "r", stdin);
#endif
    hmap.insert(make_pair("dz=", 1));
    hmap.insert(make_pair("s=" , 1));
    hmap.insert(make_pair("z=" , 1));
    hmap.insert(make_pair("c=" , 1));

    hmap.insert(make_pair("c-" , 1));
    hmap.insert(make_pair("d-" , 1));

    hmap.insert(make_pair("lj" , 1));
    hmap.insert(make_pair("nj" , 1));
    solve();
    return 0;
}