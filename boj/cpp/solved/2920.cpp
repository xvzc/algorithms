#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int i,x;
string s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    for(i = 0; i < 8; i++){
        cin >> x;
        s += x + '0';
    }
    if(s.compare("12345678") == 0)
        cout << "ascending" << endl;
    else if(s.compare("87654321") == 0)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;

    return 0;
}