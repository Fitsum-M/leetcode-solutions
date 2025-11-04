class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    vector<int> sum(n + 1);
    sum[0] = 0;
    sum[1] = 1;
    sum[2] = 1;

    for (int i = 3; i <= n; i++) {
        sum[i] = sum[i - 3] + sum[i - 2] + sum[i - 1];
    }
    return sum[n];
}
    };
