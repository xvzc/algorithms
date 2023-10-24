#include <bits/stdc++.h>
#include <unordered_set>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N;
unordered_set<string> hset;
bool dict_compare(string a, string b){
    if(a.length() == b.length())
        return a < b;
    else 
        return a.length() < b.length();
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N;
    vector<string> words;
    string word;
    for(int i = 0; i < N; i++){
        cin >> word;

        if(hset.find(word) == hset.end()){
            hset.insert(word);
            words.push_back(word);
        }
        
    }

    sort(words.begin(), words.end(), dict_compare);

    for(int i = 0; i < words.size(); i++){
        cout << words[i] << endl;
    }

    return 0;
}