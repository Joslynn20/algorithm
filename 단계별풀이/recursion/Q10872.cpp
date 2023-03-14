#include<bits/stdc++.h>
using namespace std;

int multiple(int N){
    if(N != 0)
        return N * multiple(N-1);
    else
        return 1;
}

int main(){
    int N;

    cin >> N; 
    cout << multiple(N)<<"\n";

    return 0;
}
