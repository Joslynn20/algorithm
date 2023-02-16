#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

int N; // 회의 개수
ll meeting [100001];
vector<pair<ll, ll>> v;
int cnt; // 최대 회의 개수

int main(){
    cin >> N;
    pair<ll, ll> time;
    for(int i=0; i<N; i++){
        // 회의가 끝난 후 다음 회의와의 텀을 최소화 -> 끝나는 시간을 기준으로 오름차순
        cin >> time.second >> time.first;
        v.push_back(time);
    }
    
    // 끝나는 시간을 기준으로 정렬
    sort(v.begin(), v.end());

    int end = v[0].first; // 최초에 끝나는 시간을 end에 저장
    cnt++;

    for(int i=1; i<N; i++){
        if(end <= v[i].second) { // 가장 먼저 조건이 참이 됨 = 가장 텀이 짧음
            cnt++;
            end = v[i].first;
        }
    }
    
    cout << cnt;

    return 0;
}