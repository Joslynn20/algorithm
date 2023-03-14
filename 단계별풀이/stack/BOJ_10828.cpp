#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int N;
stack<int>st;

int main(){
    fastio;
    cin >> N;
    string str;
    for(int i = 0; i < N; i++){
        cin >> str;

        if(str=="pop") {
            if(st.size() == 0){
                cout << -1 << "\n";
                continue;
            }
            cout << st.top() << "\n";
            st.pop();
        }
        else if(str=="size") {
           cout << st.size() << "\n";
        }
        else if(str == "empty"){
            if(st.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(str == "top"){
            if(!st.empty())
                cout << st.top() << "\n";
            else 
                cout << -1 << "\n";
        }
        else {
            int num;
            cin >> num;
            st.push(num);
        }
    }
}
