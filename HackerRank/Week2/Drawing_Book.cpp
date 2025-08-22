int pageCount(int n, int p) {
   int frontPages=p/2;
    int backPages=(n/2)-(p/2);
    return min(frontPages, backPages);
}
