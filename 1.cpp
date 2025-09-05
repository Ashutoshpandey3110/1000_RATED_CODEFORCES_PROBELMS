#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// Function to handle a single test case
void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> g(n);
    long long sum = 0;
    long long max_grumpiness = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> g[i];
        sum += g[i];
        if (g[i] > max_grumpiness) {
            max_grumpiness = g[i];
        }
    }

    // Special case for n=2, as there is only one operation.
    if (n == 2) {
        std::cout << std::max(g[0], g[1]) << std::endl;
        return;
    }

    // --- Core Logic ---

    // 1. Divisibility Constraint: The total value must be divisible by (n-1).
    // Find the smallest sum >= current sum that is a multiple of (n-1).
    long long target_sum_for_divisibility = sum;
    long long remainder = sum % (n - 1);
    if (remainder != 0) {
        target_sum_for_divisibility += (n - 1 - remainder);
    }

    // 2. Maximum Grumpiness Constraint: The total value must be at least (n-1) * M.
    long long target_sum_for_max = (n - 1) * max_grumpiness;

    // The final answer is the larger of these two required values.
    long long final_cost = std::max(target_sum_for_divisibility, target_sum_for_max);

    std::cout << final_cost << std::endl;
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}