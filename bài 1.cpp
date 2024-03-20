#include<bits/stdc++.h>

using namespace std;


int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2 ,1};
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int res = 0;
    int idx =0;
    while(n){
    	res += n / tien[idx];
    	n %= tien[idx];
    	idx++;
    }
    cout << res;
}
