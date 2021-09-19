#include <iostream>
#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

int number = 9;
int visit[9];
vector<int> nodes[10];

void bfs(int start){
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while(!q.empty()){
		int curNode = q.front();
		q.pop();
		printf("%d ",curNode);
		for(int i=0; i<nodes[curNode].size();i++){
			int adjNode = nodes[curNode][i];
			if(!visit[adjNode]){
				q.push(adjNode);
				visit[adjNode]=true;
			}
		}
	}
}

int main(void){
	nodes[1].push_back(2);
	nodes[2].push_back(1);

	nodes[1].push_back(3);
	nodes[3].push_back(1);

	nodes[2].push_back(4);
	nodes[4].push_back(2);

	nodes[2].push_back(5);
	nodes[5].push_back(2);

	nodes[4].push_back(8);
	nodes[8].push_back(4);

	nodes[5].push_back(9);
	nodes[9].push_back(5);

	nodes[3].push_back(6);
	nodes[6].push_back(3);

	nodes[3].push_back(7);
	nodes[7].push_back(3);

	bfs(1);

	return 0;
}
