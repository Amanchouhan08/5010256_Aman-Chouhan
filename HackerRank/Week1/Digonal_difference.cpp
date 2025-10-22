int diagonalDifference(vector<vector<int>> arr) {
     int rNc=arr.size();
    int leftSum=0, rightSum=0;
    int i=0;
    while(i<rNc){
        leftSum+=arr[i][i];
        rightSum+=arr[i][rNc-1-i];
        i++;
    }
    return abs(leftSum-rightSum);

}
