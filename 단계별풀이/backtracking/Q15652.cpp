#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr [10];

void backtracking(int currentIdx, int preNum){
    if(currentIdx == m) {
        for(int i=0; i<m; i++)
            cout << arr[i] << ' ';
        cout << "\n";
        return;
    }

    for(int i=1; i <= n; i++){
        if(i < preNum)
            continue;
        arr[currentIdx] = i;
        backtracking(currentIdx+1, i);
    }

}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;

    backtracking(0, 1);

    return 0;
}
