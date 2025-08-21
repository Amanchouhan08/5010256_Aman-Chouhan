string pangrams(string s) {
     set<char>ans;
    string s1;
    for (char c : s) {
    s1 +=tolower(static_cast<unsigned char>(c));
    }
    for(int i=0; i<s1.size(); i++){
        if(s1[i]==' ') continue;
        ans.insert(s1[i]);
    }
    return (ans.size()==26)?"pangram":"not pangram";
}
