vector<string> bomberMan(int n, vector<string> grid) {
 if (n==1) return grid;
    int r=grid.size(), c=grid[0].size();
    auto explode=[&](vector<string> g){
        vector<string> res(r,string(c,'O'));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(g[i][j]=='O'){
                    res[i][j]='.';
                    if(i>0) res[i-1][j]='.';
                    if(i<r-1) res[i+1][j]='.';
                    if(j>0) res[i][j-1]='.';
                    if(j<c-1) res[i][j+1]='.';
                }
            }
        }
        return res;
    };
    vector<string> g1=explode(grid);
    vector<string> g2=explode(g1);
    if(n%2==0) return vector<string>(r,string(c,'O'));
    if(n%4==3) return g1;
    return g2;
}
