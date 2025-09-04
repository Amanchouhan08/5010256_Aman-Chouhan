vector<int> solve(vector<int> arr, vector<int> queries) {
 int n = (int)arr.size();
    vector<int> res;
    res.reserve(queries.size());
    for (int d : queries) {
        deque<int> dq;
        int best = INT_MAX;
        for (int i = 0; i < n; ++i) {
            while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();
            dq.push_back(i);
            if (dq.front() <= i - d) dq.pop_front();
            if (i >= d - 1) {
                best = min(best, arr[dq.front()]);
            }
        }
        res.push_back(best);
    }
    return res;
}
