#include <bits/stdc++.h>

using namespace std;

int bin_search(int num, vector<int> &vec){
    int left=0;
    int right=vec.size()-1;
    int mid;

    while(left <= right) {
        mid = left + (right-left)/2;
        if(num == vec[mid])
            return mid;
        else if(vec[mid] > num) {
            right=mid-1;
        }
        else {
            left=mid+1;
        }

    }

    return -1;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int index = bin_search(7, v);
    cout << index << endl;
    return 0;
}

