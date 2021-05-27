#include <stdio.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
bool not_prime[10000];
int M, N, i, j, a;
int answer = -1;
int mini = -1;

int main(){
    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    not_prime[0] = true;
    not_prime[1] = true;
    for(i=2; i<=10000; i++){
        for(j=i+i; j <= 10000; j+=i){
            if(!not_prime[j])
                not_prime[j] = true;
        }
    }

    scanf("%d %d", &M ,&N);
    for(int i = M; i <= N; i++){
        if(!not_prime[i]){
            answer+=i;
            if(mini == -1){
                mini = i;
            }
        }
    }

    if(mini == -1){
        printf("-1\n");
        return 0;
    }

    printf("%d\n", answer+1);
    printf("%d\n", mini);

    return 0;
}