#include <bits/stdc++.h>
#include <stdio.h>
#include <unordered_map>

#define SUBMIT
#define ll long long
#define ull unsigned long long

using namespace std;

int T, x, y, d, square_root, prv_square, answer;

int main(){
    scanf("%d", &T);

    while(T--){
        scanf("%d %d", &x, &y);
        d = y - x;
        square_root = (int)sqrt(d);
        prv_square = (square_root) * (square_root);
        answer = (square_root - 1) * 2;

        if (prv_square == d)
            answer += 1;
        else if (d - prv_square <= square_root)
            answer += 2;
        else
            answer += 3;

        printf("%d\n",answer);
    }

    return 0;
}