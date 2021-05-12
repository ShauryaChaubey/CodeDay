long long gcd(long long A , long long B)
    {
        if(A == 0)
          return B;
        if(B == 0)
          return A;
        if(A == B)
          return A;
        if(A > B)
          return gcd(A-B, B);
        return gcd(A, B-A);
    }
    vector<long long> lcmAndGcd(long long A , long long B) 
    {
        long long k = gcd(A, B);
        long long m = (A*B)/k;
        vector<long long> v;
        v.push_back(m);
        v.push_back(k);
        return v;
        
    }