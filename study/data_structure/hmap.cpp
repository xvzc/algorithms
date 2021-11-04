#include<iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> v = {1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 5};
    std::unordered_map<int, int> umap;

    for(auto i : v)
        umap[i]++;

    std::string ans = "[";

    for(auto it : umap)
        ans += std::to_string(it.first) + ":" + std::to_string(it.second) + ", ";

    ans.pop_back();
    ans.pop_back();
    ans += "]";

    std::cout << ans;

    return 0;
}

