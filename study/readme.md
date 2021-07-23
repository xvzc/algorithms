# 최대 연속 부분수열 합
```cpp
int foo(int array[]){
    int best = 0, sum = 0;

    for(int k = 0; k < n ; k++){
        sum = max(array[k], sum+array[k]);
        best = max(sum, best);
    }

    return best;
}
```
# 설명
```cpp
// array[k] = {7, -9, 3, -4, 1}
// loop1
sum = max(7, 7+0); // sum.val = 7
best = max(7, 0);  // best.val = 7

// loop2
sum = max(-9, 7 + -9) // sum.val = -2
best = max(-2, 7) // best.val = 7

// loop3
sum = max(3, 7 + -2) // sum.val = 5
best = max(5, 7) // best.cal = 

```



