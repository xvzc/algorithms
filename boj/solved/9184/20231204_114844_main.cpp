#include <bits/stdc++.h>
#include <unordered_map>
#include <limits>

#define SUBMIT
#define endl '\n'
#define ll long long
#define ull unsigned long long

using namespace std;

int w[21][21][21];
int a,b,c;

void make_dp(){
	for(int i=0; i<=20; ++i){
		for(int j=0; j<=20; ++j){
			for(int k=0; k<=20; ++k){
				if(i==0 || j==0 || k==0){
					w[i][j][k] = 1;
				}
				else if(i < j && j < k)
					w[i][j][k] = w[i][j][k-1] +  w[i][j-1][k-1] - w[i][j-1][k];
				else
					w[i][j][k] = w[i-1][j][k] + w[i-1][j-1][k] + w[i-1][j][k-1] - w[i-1][j-1][k-1];
				
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	#ifndef SUBMIT
	freopen("input.txt", "r", stdin);
	#endif

	make_dp();

	while(1){
		cin >> a >> b >> c;

		if(a==-1 && b==-1 && c==-1)
			break;

		string str = "w(" + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + ") = ";

		if(a <= 0 || b <= 0 || c <= 0)
			cout << str << 1 << endl;
		else if(a > 20 || b > 20 || c > 20)
			cout << str << w[20][20][20] << endl;
		else
			cout << str << w[a][b][c] << endl;
	}

	return 0;
}