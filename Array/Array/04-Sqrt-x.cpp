class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;
        int start=1, index, end=x , mid;
        
        while(start<=end){
            mid=start + (end-start)/2;
            if(mid ==x/mid){
                index=mid;
                break;
            }
            else if(mid< x/mid){
            index= mid;
            start= mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return index;
        
    }
};
