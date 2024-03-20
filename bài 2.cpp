#include<bits/stdc++.h>

using namespace std;

long long solve(long long n, char p, char q){
	string s =  to_string(n);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == p){
			s[i] = q;
		}
	}
	return stoll(s);
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int t1 = solve(a, '5', '6') + solve(b, '5', '6');
    int t2 = solve(a, '6', '5') + solve(b, '6', '5');
    cout << t1 << ' ' << t2;
}
