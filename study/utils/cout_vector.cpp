#include<bits/stdc++.h>

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

