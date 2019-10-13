#include <iostream>
#include <vector>
#include <queue>
#include <stdio.h>
#include <algorithm>

using namespace std;

vector<int> visit;
vector<vector<int>> nodes;
queue<int> q;

int numOfNodes, numOfLines, startNode;
void dfs(int index);
void bfs(queue<int> qu);

int main(void){
	cin>>numOfNodes>>numOfLines>>startNode;

	visit.assign(numOfNodes+1, 0);
	nodes.assign(numOfNodes+1, vector<int>(1,0));

	for(int i=1;i<=numOfLines;i++){
		int a,b;
		cin>>a>>b;

		nodes[a].push_back(b);
		nodes[b].push_back(a);
	}

	// printf("nodenum : %d\n", (int)nodes.size());

	for(int i=1;i<(int)nodes.size();i++){
		sort(nodes[i].begin(), nodes[i].end());
		// printf("node [%d]: size : %d", i, (int)nodes[i].size()-1);
        //
		// for(int j=1;j<(int)nodes[i].size();j++){
		//     printf(" %d", nodes[i][j]);
		// }
        //
        //
		// printf("\n");
	}

	dfs(startNode);
	printf("\n");

	for (int i = 0; i < (int)visit.size(); ++i) {
		visit[i]=0;
	}

	q.push(startNode);
	bfs(q);
}

void dfs(int index){
	visit[index] = 1;
	printf("%d", index);

	for(int i=1; i<(int)nodes[index].size(); i++){
		if(!visit[nodes[index][i]]){
			printf(" ");
			dfs(nodes[index][i]);
		}
	}
}

void bfs(queue<int> qu){
	while(!qu.empty()){
		visit[qu.front()]=1;
		printf("%d ", qu.front());
		for(int i=1; i < (int)nodes[qu.front()].size(); i++){
			if(!visit[nodes[qu.front()][i]]){
				qu.push(nodes[qu.front()][i]);
				visit[nodes[qu.front()][i]] = 1;
			}
		}
		qu.pop();
	}
	printf("\n");
}
