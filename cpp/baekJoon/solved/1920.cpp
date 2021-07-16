#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;
int num1;
int num2;

vector<int>& from(vector<int> &vec){
	return vec;
}

bool bin_search(int num, vector<int> &vec){
	int left=0;
	int right=vec.size()-1;

	int mid;
	while(left <= right) {
		// cout << "num : " << num << endl;
		// cout << "vec[i] : " << vec[i] << endl;
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

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	cin >> num1;
	vector<int> vec1(num1);
	for(int i=0; i<num1; i++)
		cin >> vec1[i];

	cin >> num2;
	vector<int> vec2(num2);
	for(int i=0; i<num2; i++)
		cin >> vec2[i];

	sort(vec1.begin(), vec1.end());

	for(int i=0; i<vec2.size(); ++i){
		int value = vec2[i];
		int result;

		if(bin_search(value , from(vec1))) 
			result = 1;
		else
			result = 0;

		cout << result << endl;
	}

	return 0;
}