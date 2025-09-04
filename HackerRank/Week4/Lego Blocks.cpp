int legoBlocks(int n, int m) {
 const int MOD=1000000007;
    vector<long long> row(m+1);
    row[0]=1;
    for(int i=1;i<=m;i++){
        row[i]=row[i-1];
        if(i>=2) row[i]=(row[i]+row[i-2])%MOD;
        if(i>=3) row[i]=(row[i]+row[i-3])%MOD;
        if(i>=4) row[i]=(row[i]+row[i-4])%MOD;
    }
    vector<long long> total(m+1), solid(m+1);
    for(int i=1;i<=m;i++){
        total[i]=1;
        for(int j=0;j<n;j++) total[i]=(total[i]*row[i])%MOD;
    }
    solid[0]=1;
    for(int i=1;i<=m;i++){
        solid[i]=total[i];
        for(int j=1;j<i;j++){
            solid[i]=(solid[i]-solid[j]*total[i-j])%MOD;
            if(solid[i]<0) solid[i]+=MOD;
        }
    }
    return solid[m];
}
