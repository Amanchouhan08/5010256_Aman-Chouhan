string caesarCipher(string s, int k) {
   string result = "";
    k = k % 26;  

    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            char shifted = (c - base + k) % 26 + base;
            result += shifted;
        } else {
            result += c; 
        }
    }

    return result;
}
