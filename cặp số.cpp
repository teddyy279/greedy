#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    vector<int> c, l;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) c.push_back(a[i]);
        else l.push_back(a[i]);
    }
    if(c.size() % 2 == 0){
        cout << "YES";
    }
    else{
        for(int i = 0; i < c.size(); i++){
            for(int j = 0; j < l.size(); j++){
                if(abs(c[i] - l[j])){
                    cout << "YES";
                    return 0;
                }
            }
        }
        cout << "NO";
    }
}

