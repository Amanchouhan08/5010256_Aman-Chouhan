vector<int> dynamicArray(int n, vector<vector<int>> queries) {
 vector<vector<int>> arr(n); 
    vector<int> result;          
    int lastAnswer = 0;

    for (auto &q : queries) {
        int type = q[0];
        int x = q[1];
        int y = q[2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y);
        } else if (type == 2) {
            int value = arr[idx][y % arr[idx].size()];
            lastAnswer = value;
            result.push_back(lastAnswer);
        }
    }

    return result;
}
