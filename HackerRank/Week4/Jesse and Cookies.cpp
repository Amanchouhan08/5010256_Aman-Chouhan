int cookies(int k, vector<int> A) {
      priority_queue<int,vector<int>,greater<int>> pq(A.begin(),A.end());
    int ops=0;
    while(pq.size()>1 && pq.top()<k){
        int a=pq.top(); pq.pop();
        int b=pq.top(); pq.pop();
        pq.push(a+2*b);
        ops++;
    }
    return pq.top()>=k?ops:-1;

}
