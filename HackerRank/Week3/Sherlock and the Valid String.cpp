string isValid(string s) {
     unordered_map<char,int> f;
    for(char c:s) f[c]++;
    unordered_map<int,int> cnt;
    for(auto &p:f) cnt[p.second]++;
    if(cnt.size()==1) return "YES";
    if(cnt.size()==2){
        auto it=cnt.begin();
        int a=it->first, ca=it->second; ++it;
        int b=it->first, cb=it->second;
        if((a==1 && ca==1) || (b==1 && cb==1)) return "YES";
        if(abs(a-b)==1 && ((ca==1 && a>b) || (cb==1 && b>a))) return "YES";
    }
    return "NO";
}
