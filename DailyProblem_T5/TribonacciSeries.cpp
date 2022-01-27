int arr[38];
    int tribonacci(int n) 
    {
        /*if(n == 0 || n == 1) return n;
        else if(n == 2) return n-1;
        
        return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);*/
        
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        for(int i=3; i<=n; i++)
        {
            arr[i] = arr[i-3]+arr[i-1]+arr[i-2];
        }
        return arr[n];
    }

    //The Tribonacci sequence Tn is defined as follows: 

    //T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.