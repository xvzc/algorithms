#include<cstdio>

int main() {
	int c = 0;
	char input[1000011];
	input[fread(input, 1, 1000011, stdin)] = 0;

    printf("%s", input);

	for (int i = 0; input[i]; ++i) {
		if (input[i] > 33 && input[i + 1] < 33) c++;
	}
	printf("%d", c);
}