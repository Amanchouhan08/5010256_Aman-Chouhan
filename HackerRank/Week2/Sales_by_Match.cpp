int sockMerchant(int n, vector<int> ar) {
       unordered_map<int, int>freq;
    int count=0;
    for(int i:ar){
        freq[i]++;
    }
    for(auto &p:freq){
        count+=p.second/2;
    }
    return count;
}
