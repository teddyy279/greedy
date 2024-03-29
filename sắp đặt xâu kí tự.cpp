#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int d[256] = {0};
    int t1 = -1;
    for(int i = 0; i < s.size(); i++){
        d[s[i]]++;
        t1 = max(t1, d[s[i]]);
    }
    if(t1 <= (n - 1) / (2  + 1)) cout << "YES";
    else cout << "NO";
}