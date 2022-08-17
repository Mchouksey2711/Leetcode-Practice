class Solution {
public:
    long long int SquareRoot(int n){
        int s=0, ans;
        int e=n;
        long long int mid= s+ (e-s)/2;

        while(s<=e){
            long long int square= mid*mid;
            if(square == n)
                return mid;
            else if(square > n)
                e= mid-1;
            else{
                ans= mid;
                s= mid+1;
            }
            mid= s+ (e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return SquareRoot(x);
    }
};