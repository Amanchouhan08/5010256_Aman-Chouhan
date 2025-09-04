vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
 vector<int> rank, res;
    rank.push_back(scores[0]);
    for(int i=1;i<scores.size();i++) if(scores[i]!=scores[i-1]) rank.push_back(scores[i]);
    int i=rank.size()-1;
    for(int a:alice){
        while(i>=0 && a>=rank[i]) i--;
        res.push_back(i+2);
    }
    return res;
}
