void plusMinus(vector<int> arr) {
   int n=arr.size();
    float cntPosi=0, cntNeg=0, cntZero=0;
    for(int i=0; i<n; i++){
        if (arr[i]==0)cntZero++;
        else if(arr[i]>=1) cntPosi++;
        else if(arr[i]<0) cntNeg++;
    }
    float pos=cntPosi/n;
    float neg=cntNeg/n;
    float zero=cntZero/n;
    cout<<setprecision(6)<<pos<<endl;
    cout<<setprecision(6)<<neg<<endl;
    cout<<setprecision(6)<<zero;
}
