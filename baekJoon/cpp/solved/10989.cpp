#include <bits/stdc++.h>
#include <unistd.h>
#include <cstdio>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

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

using namespace io;

int arr[10001];
int N, x;

int main(){

    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    N = scan();

    while(N--){
        x = scan();
        arr[x]++;
    }

    for(int i = 1; i < 10001; i++){
        for(int j=0; j < arr[i]; j++){
            print(i);
        }
    }

    return 0;
}