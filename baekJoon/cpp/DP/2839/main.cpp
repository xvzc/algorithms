#include <iostream>
using namespace std;
int n, answer;
int main() {
	scanf("%d", &n);
	while(1){
		if(n%5==0){
			cout << answer+n/5 << endl;
			return 0;
		}

		n-=3;

		if(n<0)
			break;
		
		answer++;
	}

	cout << "-1" << endl;
	return 0;
}
