#include <iostream>
using namespace std;

int N;
int M;

int[] blackjack(){
    cin >> N;
    cin >> M;

    int arr[N];

    for(int i=0; i<N; i++){
        arr[i] = cin >>;
    }

    return arr;
}

int main(){
    int arr[N];
    arr = blackjack();
    cout << arr ;

    return 0;
}