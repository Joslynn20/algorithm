#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> v;
pair<int, int> ret;

int height[9], sum;

void combi(){
    for(int i=0; i<9; i++){
        for(int j= i+1; j<9; j++){
            if(sum - height [i] - height[j] == 100){
                ret = {i, j};
                return;
            }
        }
    }    
}

int main(){
    fastio;

    // 난쟁이 키 입력
    for(int i=0; i<9; i++){
        cin >> height[i];
        sum += height[i];
    }

    sort(height, height+9);

    combi();

    for(int i=0; i<9; i++){
        if(i==ret.first || i== ret.second) continue;
        cout << height[i] << "\n";
    }

}