#include <bits/stdc++.h>

using namespace std;

vector<int> v = {5, 2, 4, 6, 1, 3};

void move(int start, int end) {
    int temp = v[end];

    for (int i = end - 1; i >= start; --i) {
        v[i+1] = v[i];
    }

    v[start + 1] = temp;
}

void trace(vector<int> v1) {
    for (auto i : v1) {
        cout << i << ' ';
    } cout << endl;
}

int main() {

    trace(v);

    for (int i = 1; i < v.size(); ++i) {
        int j = i - 1;

        while (j >= 0 && j + 1 < v.size()) {
            if (v[j] >= v[i]) {
                j--;
            } else {
                break;
            }
        }

        move(j, i);

        trace(v);
    }

    return 0;
}
