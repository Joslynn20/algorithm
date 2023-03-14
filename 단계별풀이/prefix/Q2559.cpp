#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;

int total, days;
int arr[100001];
ll prefix[100001];
ll maxVal;

void solution(){
    cin >> total >> days;

    for(int i=1; i<=days; i++){
        cin >> arr[i];
        prefix[1] += arr[i];
        maxVal = prefix[1];
    }

    int cnt = 2 ;
    for(int i=days+1; i<=total; i++){
        cin >> arr[i];
        prefix[cnt] = prefix[cnt-1] + arr[i] - arr[i-days];

        if (prefix[cnt] > maxVal)
            maxVal = prefix[cnt];

        cnt++;
    }
}

int main(){
    fastio;
    solution();
    cout << maxVal;
}