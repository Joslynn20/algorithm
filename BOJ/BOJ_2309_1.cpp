#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);

int height [9];

int main(){

    for(int i=0; i<9; i++){
        cin >> height[i];
    }

    sort(height, height+9);

    // 순열 구해서 7명까지 전체 합 구하기
    do{
        int sum = 0;
        for(int i=0; i<7; i++)
            sum += height[i];
        
        if(sum == 100) break;

    }while(next_permutation(height, height+9));

    for (int i=0; i<7; i++){
        cout << height[i] << "\n";
    }
        return 0;
    
}