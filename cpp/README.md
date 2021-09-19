# CPP Study

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

## unordered_map
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

## 벡터의 모든 순열 구하기
```cpp
vector<int> v = {1, 2, 3, 4};

do {
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << ' ';
    cout << endl;
} while (next_permutation(v.begin(), v.end()));
```

## 고속 지수 계산
```cpp
/* Fast exponent in mod p */
/* Example of calculating the modulo inverse of 2^10007 */
int result = 1;
int a = 2;
int p = 10007;
for(int i=1; i <= (p-2); i = i << 1) {
    if(i & (p-2)) {
        result = (result % p * a % p) % p;
    }
    a = (a % p * a % p) % p;
}
```
