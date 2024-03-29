#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, m;
    cin >> n >> s >> m;
    int song  = m * s;
    int songaydicho = s - s/7;
    int soluongthucmuaduoc = songaydicho * n;
    int res = 1e9;
    if(soluongthucmuaduoc < song){
        cout << "-1";
    }
    else{
        for(int i = songaydicho; i >= 0; i--){
            if(i * m >= song){
                res = min(res, i);
                break;
            }
        }
    }
    cout << res;
}
