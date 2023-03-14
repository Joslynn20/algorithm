#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0);
using namespace std;

int n, m;
int arr[8];
int isused[10];
int result[8];

void backtracking(int idx, int preNum)
{
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isused[arr[i]] || arr[i] < preNum)
            continue;
        result[idx] = arr[i];
        isused[i] = 1;

        backtracking(idx + 1, arr[i]);
        isused[arr[i]] = 0;
    }
}

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    backtracking(0, 0);
}