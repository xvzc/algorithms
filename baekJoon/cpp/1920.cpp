#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

#include <unistd.h>
#include <cstdio>
namespace io {
	const int is = 1024 * 72, os = 1024 * 2;
	char ib[is], *ip = ib;
	char ob[os + 16], *op = ob;

	inline char get() {
	if(ib + is == ip) syscall(0, 0, ip = ib, is);
	return *ip; 
	}

	inline int scan() {
		int n = 0;
		while(get() <= ' ') ip++;
		while(get() >= '0') n = (n * 10) + (*ip++ & 15);
		return n;
	}

	inline void flush() { syscall(1, 1, op = ob, op - ob); }
	struct f { ~f() { flush(); } } flusher;

	inline void print(int n) {
		char temp[16], *t = temp;
		do *t++ = n % 10 | 48; while(n /= 10);
		do *op++ = *--t; while(t != temp);
		*op++ = '\n';
		if(op >= ob + os) flush();
	}
}


using namespace std;
using namespace io;


int num1;
int num2;

bool bin_search(int num, vector<int> &vec){
	int left=0;
	int right=vec.size()-1;

	int mid;
	while(left <= right) {
		mid = left + (right-left)/2;

		if(num == vec[mid])
			return true;
		else if(vec[mid] > num) {
			right = mid-1;
		}
		else {
			left = mid+1;
		}

	}

	return false;
}

int main(){
	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	num1 = scan();
	vector<int> vec1(num1);
	for(int i=0; i<num1; i++)
		vec1[i] = scan();

	num2 = scan();
	vector<int> vec2(num2);
	for(int i=0; i<num2; i++)
		vec2[i] = scan();

	sort(vec1.begin(), vec1.end());

	for(int i=0; i<vec2.size(); ++i){
		if(bin_search(vec2[i], vec1)) 
			print(1);
		else
			print(0);
	}


	return 0;
}