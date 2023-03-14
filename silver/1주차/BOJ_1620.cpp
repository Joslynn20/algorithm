#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int N, M;

unordered_map<int, string> numMap;
unordered_map<string, int> strMap;

int main(){
    fastio;

    cin >> N >> M;

    string temp = "";
    for(int i=1; i<=N; i++){
        cin >> temp;
        numMap.insert({i, temp});
        strMap.insert({temp, i});
    }


    string answer = "";
    int tp = 0;
    for(int i=1; i<=M; i++){
        cin >> temp;
        if(strMap.find(temp) != strMap.end()){
            cout << strMap[temp] << "\n";
        } else{
            tp = stoi(temp.c_str());
            cout << numMap[tp] <<  "\n";
        }      
    }

    return 0;
}