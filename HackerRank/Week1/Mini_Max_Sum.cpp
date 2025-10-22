void miniMaxSum(vector<int> arr) {
 sort(arr.begin(),arr.end());
 long long min=0,max=0;
 for(int i=0;i<4;i++){
    min=min+arr[i];
 }
 for(int i=1;i<5;i++){
    max=max+arr[i];
 }
 cout<<min<<" "<<max<<endl;
}
