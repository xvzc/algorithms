#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int number = 9;
int visit[9];
vector<int> a[10];

void dfs(int start){
    if(visit[start])
        return;

    visit[start] = true;
    printf("%d",start);

    for(int i=0; i < (int)a[start].size(); i++){
        int x = a[start][i];
        dfs(x);
    }
}

int main(void){
    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[4].push_back(8);
    a[8].push_back(4);

    a[5].push_back(9);
    a[9].push_back(5);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    dfs(1);

    return 0;
}
