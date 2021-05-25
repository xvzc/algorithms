#include <iostream>
using namespace std;

int dp[500][500] = {0, };

int max(int x,int y){return x>y?x:y;}

int i,j,n,m;
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++) 
		for (j=0;j<=i;++j) 
			scanf("%d",&dp[i][j]);

	for(i=1;i<n;i++){
		for (j=0; j<=i; ++j) {
			if(j==0||j==i){
				dp[i][j] = dp[i][j]+(j==0?dp[i-1][j]:dp[i-1][j-1]);
				continue;
			}

			dp[i][j]+=max(dp[i-1][j-1], dp[i-1][j]);
		}
	}

	for(i=0;i<n;i++){
		if(m<dp[n-1][i])
			m=dp[n-1][i];
	}
	cout << m << endl;

	return 0;
}

