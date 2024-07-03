#include <iostream>
#include <vector>

using namespace std;

int fab(int n) {
    if(n==0) {
        return 0;
    } else if(n == 1 || n == 2) {
        return 1;
    }
    else {
        return fab(n-1) + fab(n-2);
    }
}

int fab_dp(int n) {
    vector<int> dp(n, 0);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3 ; i <= n; i ++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int fab_for_loop(int n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    int prev_2 =  1;
    int prev_1 = 1;
    int cur = 0;
    for(int i = 3; i <= n ; i++) {
        cur = prev_1 + prev_2 ;
        prev_1 = prev_2;
        prev_2 = cur;
    }
    return cur;
}
int main(){
    cout << fab(1) << endl;
    cout << fab(2) << endl;
    cout << fab(3) << endl;
    cout << fab(4) << endl;
    cout << fab(5) << endl;
    cout << fab(6) << endl;
    cout << fab(5) << endl;
    cout << fab(5) << endl;
    cout << fab(5) << endl;
    cout << fab(5) << endl;
    cout << fab_dp(12) << endl;
    cout << fab_for_loop(12) << endl;
}

//fab(0) : 1
//fab(1) : 1
//fab(2) : 2
//fab(3) : 3
//fab(4) : 5
//fab(5) : 8

