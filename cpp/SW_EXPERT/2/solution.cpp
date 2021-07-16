#define MAX_N 1000
#define MAX_M 20
#include <iostream>

using namespace std;
struct Result {
	int y, x;
};
int n;
int m;
int map_[MAX_N][MAX_N];

void init(int N, int M, int Map[MAX_N][MAX_N]) {
    n = N;
    m = M;

    for(int i =0; i < MAX_N; i++){
        for(int j =0; j < MAX_N; j++){
            map_[i][j] = Map[i][j];
        }
    }
}

Result findConstellation(int stars[MAX_M][MAX_M])
{
	Result res;

    for(int hi = 0; hi < MAX_M; hi++){
        for(int vi = 0; vi < MAX_M; vi++){
            for(int i = hi; i < hi + MAX_M && i < MAX_N; i++){
                for(int j = vi; j < vi + MAX_M && j < MAX_N; j++){
                    if(stars[i-hi][j-vi] + map_[i][j] == 2 || 
                            stars[i-hi][j-vi] + map_[i][j] == 10){
                        res.x = hi;
                        res.y = vi;
                        cout << "wefw" << endl;
                        return res;
                    }
                }
            }
        }
    }

	res.y = res.x = 0;
	return res;
}
