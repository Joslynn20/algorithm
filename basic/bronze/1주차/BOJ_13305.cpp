#include <bits/stdc++.h>
using namespace std;

int N; // 도시의 개수
long long liters[100000]; // 리터당 가격
long long dis[100000]; // 도시 간 거리

int main () {
    cin >> N; // 도시 개수 입력

    for(int i=0; i < N-1; i++) {
        cin >> dis[i]; // 도시 간 거리
    }

    for(int i=0; i<N; i++) {
        cin >> liters[i]; // 리터 당 가격
    }

    long long minVal = liters[0]; // 최솟값 시작점
    long long sum = liters[0] * dis[0]; // 총합

    for(int i=1; i<N-1; i++){
        // 현재 기름 값이 최솟값이면 인덱스, 값 변경
        if(liters[i] < minVal){
            minVal = liters[i];
        }
        sum += minVal * dis[i];
    }

    cout << sum;

    return 0; 

}