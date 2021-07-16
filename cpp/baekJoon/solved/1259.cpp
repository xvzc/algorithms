#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int number;

bool solve(int number){
	string rev = to_string(number);

	reverse(rev.begin(), rev.end());

	int rev_number = stoi(rev);

	if(rev_number == number)
		return true;

	return false;	
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif
	while(1){
		cin >> number;
		if(number == 0)
			break;

		if(solve(number))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}