void processQueries(vector<vector<int>> queries) {
    stack<int> s1,s2;
    for(auto &q:queries){
        if(q[0]==1) s1.push(q[1]);
        else {
            if(s2.empty()) while(!s1.empty()){ s2.push(s1.top()); s1.pop(); }
            if(q[0]==2) s2.pop();
            else cout<<s2.top()<<"\n";
        }
    }
}
