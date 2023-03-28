#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int K, N;
int arr [100001];
int prefix[100001];
int maxVal;

int main(){
    // 날짜 수
    cin >> N >> K;

    int idx = 0;
    for(int i=0; i<N; i++){
        cin >> arr[i];

        if(i < K){
            prefix[idx] += arr[i];
            maxVal = prefix[idx];
        } else{
            prefix[++idx] = prefix[idx] - arr[idx] + arr[idx + K];
            maxVal = max(maxVal , prefix[idx]);
        }
    }

    cout << maxVal;

    return 0;
}