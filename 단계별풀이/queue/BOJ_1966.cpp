#include<bits/stdc++.h>
using namespace std;

// 테스트 케이스 개수
int T;
// 문서 개수
int N;
// 몇번째 놓여있는지
int M;

// 중요도 배열
vector<int> v;

// 큐 배열
vector<int> Q;
int head = 0, tail = 0;

int maxVal = INT_MIN;

int main(){

    cin >> T;


    for(int t=0; t<T; t++){
        maxVal = INT_MIN;
        cin >> N;
        cin >> M;
        for(int i=0; i<N; i++){
            cin >> Q[i];
            max(Q[i], maxVal);
        }

        Q.clear();
        head = 0, tail = 0;
    }

    return 0;
}

void push(int a){
    Q[tail++] = a;
}

int pop(){
   return Q[head++];
}

int front(){
    return Q[head];
}

bool isImportant(int a, int idx){
    for(int i=idx+1; i < tail; i++){
        if(a < Q[i])
           return false;
    }

    return true;
}