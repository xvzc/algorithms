#include <bits/stdc++.h>

using namespace std;

// Recursive function to demonstrate the extended Euclidean algorithm.
// It returns multiple values using tuple in C++.
tuple<int, int, int> extended_gcd(int a, int b) {
    if (a == 0) return make_tuple(b, 0, 1);

    int gcd, x, y;

    // unpack tuple returned by function into variables
    tie(gcd, x, y) = extended_gcd(b % a, a);

    return make_tuple(gcd, (y - (b/a) * x), x);
}

int main() {
    int a = 17;
    int b = 72;

    tuple<int, int, int> t = extended_gcd(a, b);

    int gcd = get<0>(t);
    int x = get<1>(t);
    int y = get<2>(t);

    cout << "gcd(" << a << ", " << b << ") = " << gcd << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << a << " * " << x << " + " << b << " * " << y << " = " << gcd << endl;

    return 0;
}

