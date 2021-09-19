#include <bits/stdc++.h>

using namespace std;

/* Fast exponent in mod p */
long long fast_exponent(long long base, long long x, long long mod) {

    long long res = 1;
    while (x) {

        // If y is odd, multiply x with result
        if (x % 2 == 1) res = (res % mod * base % mod) % mod;
             
        // y = y/2
        x = x >> 1;
         
        // Change x to x^2
        base = (base % mod * base % mod) % mod;
    }

    return res;
}

/* Example of calculating the modular inverse of 2 in mod 10007*/
int main(int argc, char *argv[]) {
    cout << fast_exponent(2, 1000000007, 1000000007);
    
    return 0;
}
