vector<int> countingSort(vector<int> arr) {
     vector<int> ans(100,0);
    for(int i=0; i<arr.size(); i++){
        ans[arr[i]]++;
    }
    return ans;
}
