#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int N, i, sum;

void solve(){

    i=1;
    while(1){
        sum = ((i+1)*i)/2;

        if(sum >= N)
            break;

        i++;
    }
    int diff = sum-N;
    if (i%2 == 0)
        cout << i - diff << '/' << 1 + diff << endl;
    else
        cout << 1 + diff << '/' << i - diff<< endl;

    #ifndef SUBMIT

    #endif
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> N;
    solve();
    return 0;
}