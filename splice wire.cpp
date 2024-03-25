#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pq.push(a[i]);
    }
    int res = 0;
    while(pq.size() >= 2){
        int t1 = pq.top(); pq.pop();
        int t2 = pq.top(); pq.pop();
        res += t1 + t2;
        pq.push(t1 + t2);
    }
    cout << res;
}