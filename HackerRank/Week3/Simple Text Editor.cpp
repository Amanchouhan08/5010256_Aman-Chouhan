void textEditor(vector<vector<string>> ops) {
    string s; stack<string> st;
    for(auto &op:ops){
        if(op[0]=="1"){ st.push(s); s+=op[1]; }
        else if(op[0]=="2"){ st.push(s); s.erase(s.size()-stoi(op[1])); }
        else if(op[0]=="3"){ cout<<s[stoi(op[1])-1]<<"\n"; }
        else if(op[0]=="4"){ s=st.top(); st.pop(); }
    }
}
