# Python3

## 재귀 함수 depth 제한 다루기
```python
import sys
sys.setrecursionlimit(10**8) # 10^8까지 depth를 늘림
```

## 문자열이 숫자인지 아닌지 판별

```python
s1 = '12a3'
s2 = '1234'

s3 = 'abcd'
s4 = 'abc3'

print(s1.isdigit()) # False
print(s2.isdigit()) # True

print(s1.isalpha()) # True
print(s2.isalpha()) # False
```

## 에라토테네스의 체 set으로 구현
```python
def solution(n):
    num=set(range(2,n+1)) # 2 부터 n+1 범위의 set 생성

    for i in range(2,n+1):
        if i in num:
            num-=set(range(2*i,n+1,i)) # 에라토스테에스의 체 알고리즘에서 걸러져야할 부분을 range set을 이용해 제거한다.
    return len(num)
```

## numpy 행렬 연산
```python
import numpy as np

def solution(arr1, arr2):
    answer = []

    A = np.array(arr1)
    B = np.array(arr2)

    return (A+B).tolist() # 문제 제출 시 반드시 tolist()를 사용해 list로 변환하여 return 한다.
```


## heapq
```python
import heapq

data = [1, 3, 2, 4, 5]
heapq.heapify(data)
heapq.heappush(data, 7)
heapq.heappush(data, 2)
heapq.heappush(data, 2)
heapq.heappush(data, 2)

while True:
    try:
        print(heapq.heappop(data),' ', end='')
        # 1  2  2  2  2  3  4  5  7
    except IndexError:
        break
```
