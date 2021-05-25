#include <bits/stdc++.h>
#define endl cout<<'\n'

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[ ";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
        os << ", ";
    }
    os << " ]";
    return os;
}

void print_arr(int arr[]){
    copy(begin(arr), end(arr), ostream_iterator<int>(std::cout, " "));
}


vector<int> v(5, 1);
char arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
int main(int argc, char const *argv[])
{

    cout << v; endl;

    return 0;
}
