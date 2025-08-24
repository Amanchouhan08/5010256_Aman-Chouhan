string balancedSums(vector<int> arr) {
  long long totalSum = 0;
    for (int x : arr) totalSum += x;

    long long leftSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        long long rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) return "YES";
        leftSum += arr[i];
    }
    return "NO";
}
