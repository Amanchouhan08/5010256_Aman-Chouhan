vector<int> waiter(vector<int> number, int q) {
vector<int> primes,res;
    auto isPrime=[&](int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++) if(x%i==0) return false;
        return true;
    };
    for(int i=2;primes.size()<q;i++) if(isPrime(i)) primes.push_back(i);
    vector<int> A=number,B;
    for(int i=0;i<q;i++){
        vector<int> newA;
        for(int j=A.size()-1;j>=0;j--){
            if(A[j]%primes[i]==0) B.push_back(A[j]);
            else newA.push_back(A[j]);
        }
        reverse(B.begin(),B.end());
        for(int x:B) res.push_back(x);
        B.clear();
        A=newA;
    }
    reverse(A.begin(),A.end());
    for(int x:A) res.push_back(x);
    return res;
}
