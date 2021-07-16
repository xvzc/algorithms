#include <bits/stdc++.h>

long long sum(std::vector<int> &a){
    long long sum = 0;
    for(auto value : a){
        sum+=value;
    }
    return sum;
}