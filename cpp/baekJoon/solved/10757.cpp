#include <bits/stdc++.h>

// #define SUBMIT
#define endl cout<<'\n'
#define ll long long
#define ull unsigned long long

using namespace std;

string x, y, answer;
int xi, yi, sum, carry; 

void solve(){
    for(xi = x.length()-1, yi = y.length() - 1; xi >= 0 || yi >= 0; xi--, yi--){
        sum = (yi >= 0 ? y[yi]-'0' : 0) + (xi >= 0 ? x[xi]-'0' : 0) + carry;
        carry = sum/10;
        sum  %= 10;
        answer += (char)(sum + 48);
    }

    if(carry)
        answer += (char)(carry + 48);

    reverse(answer.begin(), answer.end());

    cout << answer;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> x >> y;
    solve();
    return 0;
}