#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, n;
    cin >> s >> n;
    if(n * 9 < s || (s == 0 && n >= 2)){
        cout << -1;
    }
    else{
        s = s - 1;
        string t1 = string(8, '0');
        for(int i = t1.size() - 1; i >= 0 ; i--){
            if(s > 9){
                t1[i] = '9';
                s -= 9;
            }
            else{
                t1[i] = s + '0';
                s = 0;
                break;
            }
        }
        if(t1[0] == '0'){
            t1[0] = '1';
        }
        cout << t1;
    }
}
