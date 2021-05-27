#include <bits/stdc++.h>

using namespace std;

char arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

int main(int argc, char const *argv[]) {
    copy(begin(arr), end(arr), ostream_iterator<int>(std::cout, " "));

    return 0;
}
