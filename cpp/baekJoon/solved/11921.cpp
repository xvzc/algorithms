#include <bits/stdc++.h>
#include <unistd.h>
#include <cstdio>

#define endl '\n'

#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */

/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */

/* ----------------------------------------------- */

namespace io {
    const int is = 1024 * 72, os = 1024 * 2;
    char ib[is], *ip = ib;
    char ob[os + 16], *op = ob;

    inline char get() {
    if(ib + is == ip) syscall(0, 0, ip = ib, is);
    return *ip; 
    }

    inline int scan() {
        int n = 0;
        while(get() <= ' ') ip++;
        while(get() >= '0') n = (n * 10) + (*ip++ & 15);
        return n;
    }

    inline void flush() { syscall(1, 1, op = ob, op - ob); }
    struct f { ~f() { flush(); } } flusher;

    inline void print(int n) {
        char temp[16], *t = temp;
        do *t++ = n % 10 | 48; while(n /= 10);
        do *op++ = *--t; while(t != temp);
        *op++ = '\n';
        if(op >= ob + os) flush();
    }
}


#define SUBMIT
int main() {

#ifndef SUBMIT
    cout << "# From the test input " << endl;
    from_test_case;
#endif

    ll answer = 0;
    int n = io::scan();
    int temp;
    int i;

    for (i = 0; i < n; ++i) {
        temp = io::scan();
        answer += temp;
    }

    cout << i << endl;
    cout << answer;

    return 0;
}

