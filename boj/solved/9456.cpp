#include <bits/stdc++.h>
#include <unistd.h>
#include <cstdio>

#define endl '\n'
#define ll long long
#define ull unsigned long long

namespace io
{
	const int is = 1024 * 72, os = 1024 * 2;
	char ib[is], *ip = ib;
	char ob[os + 16], *op = ob;

	inline char get()
	{
		if(ib + is == ip) syscall(0, 0, ip = ib, is);
		return *ip;
	}

	inline int scan()
	{
		int n = 0;
		while(get() <= ' ') ip++;
		while(get() >= '0') n = (n * 10) + (*ip++ & 15);
		return n;
	}

	inline void flush() { syscall(1, 1, op = ob, op - ob); }
	struct f { ~f() { flush(); } } flusher;

	inline void print(int n)
	{
		char temp[16], *t = temp;
		do *t++ = n % 10 | 48; while(n /= 10);
		do *op++ = *--t; while(t != temp);
		*op++ = '\n';
		if(op >= ob + os) flush();
	}
}
inline int max(int x, int y) { return x > y ? x : y; }
using namespace io;

/* GLOBAL VARIABLES */
ll i, j, k;
ll T, N, x;
ll upper[100001];
ll lower[100001];

void solve(){
    for(i = 2; i <=N; i++){
        upper[i] = max(lower[i-1] + upper[i], upper[i-1]);
        lower[i] = max(upper[i-1] + lower[i], lower[i-1]);
    }
    print(max(upper[N], lower[N]));

}

int main(){

    T = scan();
    for(; T > 0; T--){
        N = scan();
        for(i=1; i <= N; i++){
            upper[i] = scan();
        }
        for(i=1; i <= N; i++){
            lower[i] = scan();
        }
        solve();

        memset(upper, 0, sizeof(upper));
        memset(lower, 0, sizeof(lower));
    }
    return 0;
}