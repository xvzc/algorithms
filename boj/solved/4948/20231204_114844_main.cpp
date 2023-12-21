#include <stdio.h>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
bool not_prime[250001];
int N, i, j, x, answer;

int main(){
    #ifndef SUBMIT
    freopen("input.txt", "r", stdin);
    #endif

    not_prime[0] = true;
    not_prime[1] = true;
    for(i=2; i<=250000; i++){
        for(j=i+i; j<=250000; j+=i){
            if(!not_prime[j])
                not_prime[j] = true;
        }
    }

    while(1){
        scanf("%d", &x);
        if(x == 0)
            break;
        for(i=x+1; i <= 2*x; i++){
            if(!not_prime[i])
                answer++;
        }
        printf("%d\n", answer);
        answer=0;
    }


    return 0;
}