class Solution {
public:
    int countPrimes(int n) {
        vector<bool> sieve(n,true);
        int m=sieve.size();
        
        int count=0;
        for(int i=2;i<n;i++)
        {
            //dont check for numbers which are already declared non-prime
            if(sieve[i])
            {
                count++;
                for(int j=2*i;j<m;j+=i)
                {
                    sieve[j]=false;
                }
            }
        
        }
        
        
        return count;
    }
    
    
};