#include<bits/stdc++.h>

using namespace std;
// )())(() -> 2
int check(string s){
    stack<char> st;
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(st.empty()) res++;
            else st.pop();
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if(check(s)) cout << check(s); 
}

