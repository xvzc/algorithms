# About
PS study.

## Links
[Baek Joon](https://www.acmicpc.net/user/jry9913)  

# CPP

## gcd 재귀 구현
> x와 y의 최대 공약수는 y와 x를 y로 나눈 나머지의 최대 공약수와 같다.   
> 최소공배수는 두 수의 곱을 최대 공약수로 나누어 구할 수 있다.
```cpp
int gcd(int x, int y){
	return y ? gcd(y, x%y) : x;
}
```

## 이분 탐색 구현
> vec[mid]는 이미 체크 되었으므로 right, left의 인덱스 할당 시
> +1 또는 -1을 하여 범위에서 제외시켜준다.

```cpp
bool bin_search(int num, vector<int> &vec){
	int left=0;
	int right=vec.size()-1;
	int mid;

	while(left <= right) {
		mid = left + (right-left)/2;
		if(num == vec[mid])
			return true;
		else if(vec[mid] > num) {
			right=mid-1;
		}
		else {
			left=mid+1;
		}

	}

	return false;
}
```

## set 사용 하여 두 집합 더하기

```
set<string> a;
set<string> b;
set<string> buff;

a.insert("abc");
a.insert("def");
b.insert("abc");
b.insert("123");

set_union(s.begin(), s.end(), b.begin(), b.end(), inserter(buff, buff.begin()));

for(set<string>::iterator it = buff.begin(); it != buff.end(); it++) {
   cout << *it << endl;
}
```

## Unordered map
> 해당 key가 존재하면 값을 증가, 없으면 삽입하는 간단한 예시.
```cpp
int main() {
	int temp;

	unordered_map<int, int> hmap;
	unordered_map<int, int>::iterator it;

	cin >> temp;

	it =  hmap.find(temp); 

	if(it == hmap.end())
		hmap.insert(make_pair(temp, 1)) 
	else
		it->second++;

	return 0;

}
```

## stringstream을 이용해서 공백 단위로 자르기
```cpp
stringstream ss(str);

while (ss >> tmp) 
    cout << tmp << ' ';
```

## Set을 이용한 합집합 연산
```cpp
set<int> set1;
set<int> set2;

set1.insert(1);
set1.insert(3);
set1.insert(2);
set1.insert(1);
set1.insert(7);
set1.insert(1);

set2.insert(2);
set2.insert(7);
set2.insert(2);
set2.insert(9);
set2.insert(4);
set2.insert(1);

set<int> set_buff;
set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set_buff, set_buff.begin()));

for(auto it : set_buff) {
    cout << it << " ";
}
cout << endl;
```



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
