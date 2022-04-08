class Solution {
public:
    vector<int> countBits(int n) {
       /*countBits[0]=0;    
        for(int i=1;i<=n;i++)
        {
            int count=0;
            while(i)
            {
                i=i&(i-1);
                count++;
            }
            countBits[i]=count;
        }
        return countBits;
        */
        vector<int>res(n+1);
        res[0] = 0;
        for(int i = 1 ; i <= n ; i++)
            res[i] = res[i/2] + (i&1);
        return res;
    }
};