#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

long long A, B, mod;
int answer;

// a의 b 제곱
int solution(int a, int b){
    if(b==0) return 1;
    if(b==1) return a % mod;

    long long temp = solution(a, b/2);
    if(b % 2 == 0) { // 짝수 승이라면
        return (temp * temp) % mod;
    } else {
        return ((temp * temp) % mod) * a % mod;
    }
}

int main(){
    fastio;

    cin >> A >> B >> mod;

    cout << solution(A, B);

    return 0;
}

