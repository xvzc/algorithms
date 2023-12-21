#include <stdio.h>

// #define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
bool not_prime[1025];
int N, i, j, a, answer;

int main(){
    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    not_prime[0] = true;
    not_prime[1] = true;
    for(i=2; i<=1024; i++){
        for(j=i+i; j <= 1024; j+=i){
            if(!not_prime[j])
                not_prime[j] = true;
        }
    }

    scanf("%d", &N);
    while(N--){
        scanf("%d", &a);
        if(!not_prime[a]){
            answer++;
        }
    }

    printf("%d\n", answer);

    return 0;
}