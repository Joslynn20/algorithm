#include<bits/stdc++.h>
using namespace std;
const int MX = 10000005;
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

void pop_front(){
    head++;
}

void pop_back(){
    tail--;
}

void front(){
    return dat[head];
}

void back(){
    return dat[tail-1];
}