#include <bits/stdc++.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define MASK_56BITS 0x80000000000000

using namespace std;

ull mask, base, i, j, c, sum;
ull x, y, sum_x, sum_y;
ull nCr[55][55];

ull sum_of_one(ull bit_size);
ull cal_sum(ull num);

void solve(ull x, ull y){
    sum_y = cal_sum(y);
    sum_x = cal_sum(x-1);

    cout << sum_y - sum_x << endl;
}

ull sum_of_one(ull bit_size){
    c = 0;
    for(i = 1; i <= bit_size; i++)
        c += i*nCr[bit_size][i];

    return c;
}

ull cal_sum(ull num){
    base = 0;
    sum = 0;
    for(mask = MASK_56BITS; mask >= 1; mask >>= 1){
        if(num & mask){
            base+=mask;
            sum += sum_of_one(log2(mask)) + (num - base+1);
        }
    }
    return sum;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    nCr[1][0] = 1; nCr[1][1] = 1;
    for (i = 2; i <= 54; i++){ 
        nCr[i][0] = 1;
        for (j = 1; j <= 54; j++)
            nCr[i][j] = nCr[i - 1][j - 1] + nCr[i - 1][j];
    }

    cin >> x >> y;
    solve(x, y);

    return 0;
}