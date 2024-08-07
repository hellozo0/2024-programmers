//
// Created by hong jun chung on 8/4/24.
//
#include <string>
#include <vector>
using namespace std;

int check[200];

void dfs(int cur, int n, vector< vector<int> > computers) {
    check[cur] = 1;

    for(int i=0; i<n; i++) {
        if(check[i] == 0 && computers[cur][i] == 1) {
            dfs(i, n, computers);
        }
    }
}

int solution(int n, vector< vector<int> > computers) {
    int answer = 0;

    for(int i=0; i<n; i++) {
        if(check[i] == 0) {
            dfs(i, n, computers);
            answer++;
        }
    }
    return answer;
}