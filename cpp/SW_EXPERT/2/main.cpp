#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define MAX_N 1000
#define MAX_M 20

struct Result {
	int y, x;
};

extern void init(int N, int M, int Map[MAX_N][MAX_N]);
extern Result findConstellation(int stars[MAX_M][MAX_M]);

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

static int mSeed;
static int pseudo_rand(void)
{
	mSeed = mSeed * 431345 + 2531999;
	return mSeed & 0x7FFFFFFF;
}

static int Map[MAX_N][MAX_N];
static int Stars[MAX_M][MAX_M];

static int run(int Ans)
{
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);

	for (int i = 0; i < N; ++i) {
		int num;
		int cnt = N / 30;
		int idx = 0;
		for (int k = 0; k < cnt; ++k) {
			scanf("%d", &num);
			for (int m = 0; m < 30; ++m) {
				Map[i][idx++] = num & 0x01;
				num = num >> 1;
			}
		}

		if (N % 30) {
			scanf("%d", &num);
			for (int m = 0; m < (N % 30); ++m) {
				Map[i][idx++] = num & 0x01;
				num = num >> 1;
			}
		}
	}

	init(N, M, Map);

	for (int t = 0; t < K; ++t) {
		int num, sy, sx;
		scanf("%d %d %d %d", &mSeed, &num, &sy, &sx);

		for (int i = 0; i < M; ++i)
			for (int k = 0; k < M; ++k)
				Stars[i][k] = 0;

		int y = pseudo_rand() % M;
		int x = pseudo_rand() % M;
		Stars[y][x] = 9;
		for (int i = 1; i < num; ++i) {
			y = pseudo_rand() % M;
			x = pseudo_rand() % M;
			Stars[y][x] = 1;
		}

		Result answer = findConstellation(Stars);
		if ((answer.y != sy) || (answer.x != sx))
			Ans = 0;
	}

	return Ans;
}

int main()
{
	setbuf(stdout, NULL);
    freopen("sample_input.txt", "r", stdin);

	int T, Ans;
	scanf("%d %d", &T, &Ans);

	for (int tc = 1; tc <= T; tc++) {
		printf("#%d %d\n", tc, run(Ans));
	}

	return 0;
}
