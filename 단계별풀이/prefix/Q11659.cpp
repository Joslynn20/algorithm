#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int N; // 수의 개수
int M; // 합을 구해야 하는 횟수
int arr[100001]; // 배열 크기
ll prefix[100001];
int startVal, endVal;

void init() {
    cin >> N;
    cin >> M;
    
    for(int i=1; i<=N; i++){
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }
    
}

ll solution (int start, int end){
    return prefix[end] - prefix[start-1];
}

int main(){
    fastio;
    init();
    for(int i=0; i<M; i++){
        cin >> startVal >> endVal;
        int result = solution(startVal, endVal);
        cout << result << "\n";
    }

}