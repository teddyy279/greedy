#include <bits/stdc++.h>

using namespace std;

struct Job{
    int id, deadline, profit;
};

int cmp(Job a, Job b){
    return a.deadline > b.deadline;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    Job a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].deadline >> a[i].profit;
    }
    sort(a, a + n, cmp);
    int cur_date = a[0].deadline;
    int res = 0;
    int idx = 0;
    priority_queue<int> pq;
    while(cur_date >= 1){
        while(a[idx].deadline >= cur_date && idx < n){
            pq.push(a[idx].profit);
            idx++;
        }
        if(!pq.empty()){
            res += pq.top(), pq.pop();
        }
        cur_date--;
    }
    cout << res;
}