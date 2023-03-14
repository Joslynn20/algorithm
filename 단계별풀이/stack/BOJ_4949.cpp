#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string solution(string str){
    int lastIdx1 = 0;
    int lastIdx2 = 0;
    stack<char> st1;
    stack<char> st2;

    for(int i=0; i<strlen(str.c_str()); i++){
        if(str[i] == '('){
            st1.push(i);
        }
        else if(str[i] == '['){
            st2.push(i);
        }
    }

    for(int i=0; i<strlen(str.c_str()); i++){
        if(str[i] == ')'){
            if(st1.empty())
                return "no";
            if(!st2.empty() && (st2.top() > st1.top())){
                st1.pop();
                return "no";
            }
        }
        else if(str[i] == ']'){
            if(st2.empty())
                return "no";
            if(!st1.empty() && (st1.top() > st2.top())){
                st2.pop();
                return "no";
            }
        }
    }

    if(st1.empty() && st2.empty())
        return "yes";
    else
        return "no";    
    

}


int main(){
    
    fastio;

    string input;
    string answer;
    while(true){
        getline(cin, input);
        if(strcmp(input.c_str(), ".")){ // 종료조건이 아닐 때까지
            cout << solution(input) << "\n";
        } else // 종료 조건일 때,
            break;
    }

    return 0;
}

