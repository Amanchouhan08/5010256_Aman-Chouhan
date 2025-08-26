vector<int> icecreamParlor(int m, vector<int> arr) {
   unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        int need=m-arr[i];
        if(mp.count(need)) return {mp[need]+1,i+1};
        mp[arr[i]]=i;
    }
    return {};
}
