#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int dat [2000000];
int head = 0, tail = 0;

// 정수 X를 큐에 넣는 연산
void push(int x){
    dat[tail++] = x;
}

//  큐가 비어있으면 1, 아니면 0을 출력
int empty(){
    if(head-tail == 0) return 1;
    else return 0;
}

// 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력
int pop(){
    if(empty()) return -1;
    else return dat[head++];
}

int size(){
    return tail-head;
}

int front(){
    if(empty())
        return -1;
    else return dat[head];
}

int back(){
    if(empty())
        return -1;
    else return dat[tail-1];
}

int main(){

    fastio;

    int T;
    cin >> T;

    string order;
    int num;
    for(int i=0; i<T; i++){
        cin >> order;
        if(order =="push"){
            cin >> num;
            push(num);
        } else if(order =="pop"){
            cout << pop() << "\n";
        } else if(order =="size"){
            cout << size() << "\n";
        }else if(order =="empty"){
            cout << empty() << "\n";
        }else if(order =="front"){
            cout << front() << "\n";
        }else if(order =="back"){
            cout << back() << "\n";
        }
       
    }

    return 0;
}