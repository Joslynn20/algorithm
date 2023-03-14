#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int arr[1001], dp[1001], maxVal, N;
//dp[i] = i번째 원소를 마지막으로 하는 LIS의 길이

void input() {
    cin >> N;
    
    for (int i = 1; i <= N; i++) 
        cin >> arr[i];
}

int main() {
    
    fastio;

    input();
    
    for(int i = 1; i <= N; ++i) {
        dp[i] = 1;
        for(int j = 1; j < i; ++j) {
            if(arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j]+1);
        }
        maxVal = max(maxVal, dp[i]);
    }
    cout << maxVal;
    
    return 0;
}
