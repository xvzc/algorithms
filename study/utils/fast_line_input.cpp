#include<cstdio>

int main() {
    int c = 0;
    char input[1000011];
    input[fread(input, 1, 1000011, stdin)] = 0;

    printf("%s", input);
}
