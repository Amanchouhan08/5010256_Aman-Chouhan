int hackerlandRadioTransmitters(vector<int> x, int k) {
sort(x.begin(), x.end());
    int n = (int)x.size(), i = 0, ans = 0;
    while (i < n) {
        ++ans;
        int loc = x[i] + k;
        while (i < n && x[i] <= loc) ++i;
        int tower = x[i - 1];
        loc = tower + k;
        while (i < n && x[i] <= loc) ++i;
    }
    return ans;
}
