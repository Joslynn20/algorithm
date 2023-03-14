#include<bits/stdc++.h>
using namespace std;

int T; // 테스트 데이터 수
char input;

string solution(string str, stack<char> st){
    string answer ="YES";
    for(int i=0; i<str.size(); i++){
        if(str[i] == '(')
            st.push('(');
        else{
            if(st.empty()){
                answer = "NO";
                break;
            } else
                st.pop();
        }

    }
    if(!st.empty())
        answer = "NO";

    return answer;
}
int main(){
    
    // 테스트 케이스 입력
    cin >> T;

    string str;
    for(int i=0; i<T; i++){
        cin >> str;
        stack<char> st;
        cout << solution(str, st) << "\n";
    }

    return 0;
}
