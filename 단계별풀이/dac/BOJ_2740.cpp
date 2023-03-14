#include<bits/stdc++.h>
using namespace std;
// 행렬 크기
int N, M, K;
    int arr1 [100][100];
    int arr2 [100][100];
int main(){
    cin >> N >> M;
    for(int r=0; r<N; r++){
        for(int c=0; c<M; c++){
            cin >> arr1[r][c];
        }
    }
    cin >> M >> K;
    for(int r=0; r<M; r++){
        for(int c=0; c<K; c++){
            cin >> arr2[r][c];
        }
    }

    for(int x=0; x<N; x++){
        for(int y=0; y<K; y++){
            int a = 0;
            for(int z=0; z<M; z++){
                a += arr1[x][z] * arr2[z][y];
            }
            cout << a << " ";
        }

        cout << "\n";
    }

    return 0;
}