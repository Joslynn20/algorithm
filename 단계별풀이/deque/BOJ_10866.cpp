#include<bits/stdc++.h>
using namespace std;
const int MX = 10000;
int dat[MX*2+1];

// 양쪽으로 확장 필요 -> 시작 지점을 중간으로 둠
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    // tail은 마지막 요소 다음을 가리키고 있음
    dat[tail++] = x;
}

int empty(){
    if (head==tail)
        return 1;
    else return 0;
}

int pop_front(){
    if(empty())
        return -1;
    else 
        return dat[head++];
}

int pop_back(){
    if(empty())
        return -1;
    else
        return dat[--tail];
}

int front(){
    if(empty())
        return -1;
    return dat[head];
}

int back(){
    if(empty())
        return -1;
    return dat[tail-1];
}

int size(){
    return tail - head;
}

int T;
string str;
int num;
int main(){
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> str;
        if(str == "push_back"){
            cin >> num;
            push_back(num);
        } else if(str == "push_front") {
            cin >> num;
            push_front(num);
        } else if(str=="pop_front")
            cout << pop_front() << "\n";
        else if(str == "pop_back")
            cout << pop_back() << "\n";
        else if(str=="size")
            cout << size() << "\n";
        else if(str=="empty")
            cout << empty() << "\n";
        else if(str=="front")
            cout << front() << "\n";
        else if(str=="back")
            cout << back() << "\n";
        
    }
    

    return 0;
}
