#include <bits/stdc++.h>
#include <unordered_map>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

double T, xi, xj, yi, yj, ri, rj;

void solve(){
    double d = sqrt((xj-xi)*(xj-xi) + (yj-yi)*(yj-yi));

    // 두 원이 동심원인 경우를 시작으로 외접하는 경우 까지를 순차적으로 거른다.

    if(d == 0 && ri == rj) // 동심원이면서 두 원의 반지름이 같을 때. 즉, 두 원이 같을 떄.
        cout << -1 << endl;
    else if(d == 0 && ri != rj) // 동심원이면서 두 원의 반지름이 다를 때, 만나지 않음.
        cout << 0 << endl;
    else if(d < max(ri, rj) && d + min(ri, rj) < max(ri, rj)) // 큰 원의 내부에 작은원이 위치하지만 동심원이 아니고, 작은 원이 큰 원에 닿지 못하는 경우
        cout << 0 << endl;
    else if(d + min(ri, rj) == max(ri, rj)) // 내접
        cout << 1 << endl;
    else if(d + min(ri, rj) <= max(ri, rj)) // 중심의 거리가 내접할 수 있는 거리 이상이 되는 시점 부터, 기준 원의 끝자락에 나머지 한 원의 중심이 위치하는 경우 까지.
        cout << 2 << endl;
    else if(d < ri + rj) // 위 경우를 제외 하고 외접 이전 까지
        cout << 2 << endl;
    else if(d == ri + rj) // 외접
        cout << 1 << endl;
    else // 외접하는 경우보다 멀어짐
        cout << 0 << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    cin >> T;
    while(T--){
        cin >> xi >> yi >>ri >> xj >> yj >> rj;
        solve();
    }
    return 0;
}