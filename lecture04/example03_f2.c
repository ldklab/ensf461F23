unsigned pow2(unsigned val) {
    int i, rez = 2;
    if ( val ==0 )
        return 1;
    for (i = 1; i < val; i++)
        rez *= 2;
    return rez;
}