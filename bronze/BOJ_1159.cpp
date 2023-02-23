#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int N;
string name;
int alpha [30];
int main(){
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> name;
        alpha[name[0] - 'a']++;
    }

    bool flag = true;
    for(int i=0; i<30; i++){
        if(alpha[i] >= 5){
            cout << (char) (i + 'a');
            flag = false;
        }
    }

    if(flag)
        cout << "PREDAJA";

    return 0;
}