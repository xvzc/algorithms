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

## unordered_map
> 해당 key가 존재하면 값을 증가, 없으면 삽입하는 간단한 예시.
```cpp
int temp;
unordered_map<int, int> hmap;
unordered_map<int, int>::iterator it;

cin >> temp;

it =  hmap.find(temp); 

if(it == hmap.end())
	hmap.insert(make_pair(temp, 1)) 
else
	it->second++;

```
