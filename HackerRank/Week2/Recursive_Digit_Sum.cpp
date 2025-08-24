long long digitSum(const string &n) {
    long long sum = 0;
    for (char c : n) sum += (c - '0');
    return sum;
}
int superDigit(string n, int k) {
 long long initial = digitSum(n) * 1LL * k;

    // recursive function
    function<int(long long)> sd = [&](long long x) {
        if (x < 10) return (int)x;
        long long s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        return sd(s);
    };

    return sd(initial);
}
