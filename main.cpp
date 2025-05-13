#include <iostream>
#include <vector>
#include <algorithm>

int coinRowMaxSum(const std::vector<int>& coins) {
    int n = coins.size();
    if (n == 0) return 0;
    if (n == 1) return coins[0];

    std::vector<int> dp(n);
    dp[0] = coins[0];
    dp[1] = std::max(coins[0], coins[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = std::max(dp[i - 1], coins[i] + dp[i - 2]);
    }

    return dp[n - 1];
}

int main() {
    std::vector<int> coins = {5, 1, 0, 10, 6, 2};
    std::cout << "Maksimum alınabilecek toplam: " << coinRowMaxSum(coins) << std::endl;
    return 0;
}
