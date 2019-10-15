#include <stdio.h>

int func(int n);

int main(){
	int x; 
	scanf("%d",&x);
	printf("%d\n", func(x));
}

int func(int n){
	if(n < 4){
		int a = 1;

		for(int i = 0; i < n-1; i++){
			a*=2;
		}

		return a;
	}
	else return -1;
}