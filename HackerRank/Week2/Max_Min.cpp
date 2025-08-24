int maxMin(int k, vector<int> arr) {
     sort(arr.begin(), arr.end());
    int n = arr.size();
    int unfairness = INT_MAX;

    for (int i = 0; i <= n - k; i++) {
        int diff = arr[i + k - 1] - arr[i];
        unfairness = min(unfairness, diff);
    }

    return unfairness;

}
