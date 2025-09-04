string highestValuePalindrome(string s, int n, int k) {
 vector<bool> changed(n, false);
    int l = 0, r = n - 1, used = 0;
    while (l < r) {
        if (s[l] != s[r]) {
            char mx = (s[l] > s[r]) ? s[l] : s[r];
            s[l] = s[r] = mx;
            changed[l] = changed[r] = true;
            ++used;
        }
        ++l; --r;
    }
    if (used > k) return "-1";
    l = 0; r = n - 1;
    int rem = k - used;
    while (l < r) {
        if (s[l] != '9') {
            if (changed[l] || changed[r]) {
                if (rem >= 1) {
                    s[l] = s[r] = '9';
                    --rem;
                }
            } else {
                if (rem >= 2) {
                    s[l] = s[r] = '9';
                    rem -= 2;
                }
            }
        }
        ++l; --r;
    }
    if (n % 2 == 1 && rem > 0) s[n / 2] = '9';
    return s;
}
