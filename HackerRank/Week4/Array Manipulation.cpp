long arrayManipulation(int n, vector<vector<int>> queries) {
vector<long long> diff(n + 2, 0);
    for (auto& q : queries) {
        int a = q[0], b = q[1];
        long long k = q[2];
        diff[a] += k;
        diff[b + 1] -= k;
    }
    long long cur = 0, mx = 0;
    for (int i = 1; i <= n; ++i) {
        cur += diff[i];
        if (cur > mx) mx = cur;
    }
    return mx;
}
