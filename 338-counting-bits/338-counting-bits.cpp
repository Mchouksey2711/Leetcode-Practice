class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> countB;
        // countB[0]=0;
        countB.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int count=0;
            int temp=i;
            while(temp)
            {
                temp=temp&(temp-1);
                count++;
            }
            // countB[i]=count;
            countB.push_back(count);
        }
        return countB;
       
        // vector<int>res(n+1);
        // res[0] = 0;
        // for(int i = 1 ; i <= n ; i++)
        //     res[i] = res[i/2] + (i&1);
        // return res;
    }
};