#include<iostream>
#include<vector>
#include<stdio.h>
#include<math.h>

using namespace std;

bool isNotPrime[1000001]; 

int main(){
	int min, max;

	cin >> min >> max;

	for(int i = 2; i <= max; i++){
		if(!isNotPrime[i]){
			for(int j = i+i; j <= max; j+=i)
				isNotPrime[j] = true;
		}
	}

	for(int i = min<2?2:min; i <= max; i++){
		if(!isNotPrime[i])
			printf("%d\n", i);
	}
}
