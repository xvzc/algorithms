#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> set1;
    set<int> set2;

    set1.insert(1);
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(7);
    set1.insert(1);

    set2.insert(2);
    set2.insert(7);
    set2.insert(2);
    set2.insert(9);
    set2.insert(4);
    set2.insert(1);

    set<int> set_buff;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set_buff, set_buff.begin()));

    for(auto it : set_buff) {
        cout << it << " ";
    }
    cout << endl;


    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(2);
    vec1.push_back(1);
    vec1.push_back(7);
    vec1.push_back(1);
    sort(vec1.begin(), vec1.end());

    vector<int> vec2;
    vec2.push_back(2);
    vec2.push_back(7);
    vec2.push_back(2);
    vec2.push_back(9);
    vec2.push_back(4);
    vec2.push_back(1);
    sort(vec2.begin(), vec2.end());

    vector<int> buff(vec1.size(), vec2.size());
    auto iter = set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), buff.begin());
    buff.erase(iter, buff.end());


    for(auto i : buff){
        cout << i << " "; 
    }
}
