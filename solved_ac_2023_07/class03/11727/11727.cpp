#include <iostream>
using namespace std;

int dp[1001];

int main() {
    dp[1] = 1; dp[2] = 3;
    for(int i = 3; i <= 1000; i++) {
        dp[i] = (dp[i-1] + dp[i-2]*2) % 10007;
    }

    int n; cin >> n;
    cout << dp[n];

    return 0;
}