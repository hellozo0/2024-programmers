//
// Created by hong jun chung on 7/12/24.
//
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    sort(citations.begin(), citations.end(),greater<>());

    for(int i =0; i<citations.size();i++) {
        if(citations[i] >= i+1) {
            answer = i+1;
        }
    }

    return answer;
}