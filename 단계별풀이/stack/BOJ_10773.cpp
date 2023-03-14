#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int K; // 주어진 정수
stack<int> st;

int main(){
    fastio;
    
    cin >> K;
    int num=0;
    for(int i=0; i<K; i++){
        cin >> num;
        if(num == 0) st.pop();
        else st.push(num);
    }

    int total = 0;
    while(st.size() != 0){
        total += st.top();
        st.pop();
    }

    cout << total;
    
}
