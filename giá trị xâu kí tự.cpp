#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int cnt[256] = {0};
        priority_queue<int> pq;
        for(int i = 0; i < s.size(); i++){
            cnt[s[i]]++;
        }
        for(int i = 0; i < 256; i++){
            if(cnt[i]) pq.push(cnt[i]);
        }
        while(n-- && pq.size()){
            int u = pq.top(); pq.pop();
            if(u - 1 >= 1) pq.push(u - 1);
        }
        long long res = 0;
        while(pq.size()){
            int u = pq.top(); pq.pop(); 
            res += 1ll * u * u;
        }
        cout << res << endl;
    }
}
