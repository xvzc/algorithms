#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {

    set<string> a;
    set<string> b;
    set<string> res;

    a.insert("apple");
    a.insert("dog");
    a.insert("banana");
    a.insert("cat");

    b.insert("apple");
    b.insert("dog");
    b.insert("lemon");

    set_union(a.begin(), a.end(), b.begin(), b.end(), inserter(res, res.begin()));

    for(set<string>::iterator it = res.begin(); it != res.end(); it++) 
        cout << *it << endl;

    return 0;
}
