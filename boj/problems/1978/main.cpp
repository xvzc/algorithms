#include <stdio.h>
int main(void) {
  int N, primenum = 0;
  scanf("%d", &N);
  int num[100] = {
    0,
  };
  for (int i = 0; i < N; i++) {
    scanf("%d", &num[i]);
    bool is_prime = true;
    for (int j = 2; j <= num[i]; j++) {
      if (num[i] % j == 0 && j != num[i]) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      printf("%d ", num[i]);
      primenum++;
    }
  }
  printf("%d \n", primenum);
}
