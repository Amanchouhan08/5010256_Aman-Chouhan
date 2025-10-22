int lonelyinteger(vector<int> a) {
     unordered_map<int, int>hashmap;
    for(int num : a){
        hashmap[num]++;
    }
    for(auto b : hashmap){
        if(b.second==1) return b.first;
    }
    
    return 0;
}
