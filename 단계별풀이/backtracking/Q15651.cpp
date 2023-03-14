#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];

void backtracking(int current) {
    if (current == m){
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << "\n";
        return;
    }

    for(int i=1; i<=n; i++){
        arr[current] = i;
        backtracking(current+1);
    }

}

int main() {
    cin >> n >> m;
    backtracking(0);

    return 0;
}