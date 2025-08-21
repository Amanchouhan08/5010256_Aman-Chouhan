int birthday(vector<int> s, int d, int m) {
     int count=0;
    int window_sum=0;
    for(int i=0; i<m; i++){
        window_sum+=s[i];
    }
    if(window_sum==d) count++;
    
    for(int i=m; i<s.size(); i++){
        window_sum+=s[i]-s[i-m];
        if(window_sum==d) count++;
    }
    return count;
}
