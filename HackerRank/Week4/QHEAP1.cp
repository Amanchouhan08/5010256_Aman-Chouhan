void qheap1(vector<vector<int>> queries) {
    priority_queue<int,vector<int>,greater<int>> pq;
    unordered_map<int,int> del;
    for(auto &q:queries){
        if(q[0]==1) pq.push(q[1]);
        else if(q[0]==2) del[q[1]]++;
        else{
            while(!pq.empty() && del[pq.top()]>0){
                del[pq.top()]--;
                pq.pop();
            }
            cout<<pq.top()<<"\n";
        }
    }
}
