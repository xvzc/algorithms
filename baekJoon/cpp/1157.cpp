#include <bits/stdc++.h>
#include<stdio.h>

#define SUBMIT
#define _CRT_SECURE_NO_WARNINGS
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

/* GLOBAL VARIABLES */
int i;
int cnt[123];
char buffer[1 << 20];
char *p;
char idx;
char max_idx;
char max_idx2;

void solve(){
    fread(buffer, 1, 1 << 20, stdin);
	p = buffer;

    while (1) {
		if (*p == '\0') 
            break;

        idx = *p >= 97 ? *p - 32 : *p;
        cnt[(int)idx]++;

        if(idx == max_idx){
            p++;
            continue;
        }

        if(cnt[idx] >= cnt[max_idx]){
            max_idx2 = max_idx;
            max_idx = idx;
        }

        p++;

	}
    
    if(cnt[max_idx] == cnt[max_idx2])
        printf("?");
    else
        printf("%c", max_idx);

    #ifndef SUBMIT
    /* DEBUG */
    #endif
}

int main(int argc, char const *argv[]){
    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif
    solve();
    return 0;
}