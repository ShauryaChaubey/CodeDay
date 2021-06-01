int kthGrammar(int n, int k)
    {
        int length = pow(2, n-1);
        if(n == 1 || k == 1)
            return 0;
        if(k <= length/2)
            return kthGrammar(n-1, k);
        return !kthGrammar(n-1, k-(length/2));
    }